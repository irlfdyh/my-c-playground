/*
 * Stack reversing word or phrase.
 */

#include <stdio.h>

#define WORD_LENGTH 25

typedef struct {
    int top;
    int data[WORD_LENGTH];
} stack;

stack word;

void create_empty();
void push(char c);
void pop();
int is_empty();
int is_full();

int main() {

    int ctr = 0;
    char whdr;

    create_empty();

    printf("Masukkan kata\t: ");
    
    while (1)
    {
        scanf("%c", &whdr);
        if (whdr == '\n' || is_full() == 1)
            break;
        else
            push(whdr);
            ctr++;
    }

    printf("Total karakter\t: %d\n", word.top);
    printf("Dibalik menjadi\t: ");

    while (is_empty() == 0)
    {
        printf("%c", word.data[word.top]);
        pop();
    }

    printf("\n");

    return 0;
}

void create_empty()
{
    word.top = 0;
}

void push(char c)
{
    word.top = word.top + 1;
    word.data[word.top] = c;
}

void pop()
{
    word.top = word.top - 1;
}

int is_empty()
{
    if (word.top == 0)
        return 1;
    else 
        return 0;
}

int is_full()
{
    if (word.top == WORD_LENGTH)
        return 1;
    else 
        return 0;
}