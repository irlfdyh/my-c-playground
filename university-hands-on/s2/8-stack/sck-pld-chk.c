/*
 * Stack palindrome check.
 */

#include <stdio.h>

#define MAX_LENGTH 25

typedef struct {
    int top;
    char data[MAX_LENGTH];
} stack;
stack sck_albt;

void create_empty();
void push(char c);
void pop();
int is_full();
int compare(int ctr);

int main()
{
    char ahdr;
    int ctr = 0;

    printf("Masukkan kata\t: ");

    while (1)
    {
        scanf("%c", &ahdr);
        if (ahdr == '\n' || is_full() == 1)
            break;
        else
            push(ahdr);
            ctr++;
    }

    if (compare(ctr) == 1)
        printf("Hasil\t\t: PALINDROME");
    else
        printf("Hasil\t\t: BUKAN PALINDROME");

    printf("\n");

    return 0;
}

void create_empty()
{
    sck_albt.top = 0;
}

void push(char c)
{
    sck_albt.top = sck_albt.top + 1;
    sck_albt.data[sck_albt.top] = c;
}

void pop()
{
    sck_albt.top = sck_albt.top - 1;
}

int is_full()
{
    if (sck_albt.top == MAX_LENGTH)
        return 1;
    else 
        return 0;
}

int compare(int ctr)
{
    printf("comparing....\n");
    int i, ict = 1;
    for (i = 1; i <= ctr; i++)
    {
        printf("top based: %c\n", sck_albt.data[sck_albt.top]);
        printf("i based: %c\n", sck_albt.data[i]);
        if (sck_albt.data[sck_albt.top] != sck_albt.data[i])
        {
            ict--;
            break;
        }
        pop();
    }
    return ict;
}