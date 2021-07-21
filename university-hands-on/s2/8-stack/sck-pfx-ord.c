/*
 * Stack prefix or posfix order.
 */

#include <stdio.h>

#define MAX_LENGTH 25

typedef struct {
    int top;
    char data[MAX_LENGTH];
} symbol ;
symbol sml;

char tmp[MAX_LENGTH];
int cp = 0;

void create_empty();
char push(char c);
char pop();
int is_empty();
int is_full(int c);
void prp_rlt(char c);

int main()
{

    int ctr = 0;
    char ahdr;

    printf("Masukkan infix\t: ");

    while (1)
    {
        scanf("%c", &ahdr);
        if (ahdr == '\n' || is_full(ctr))
        {
            break; 
        }
        else
        {
            printf("input; %c\n", ahdr);
            if (ahdr != ' ')
            {
                if (ahdr == '(' || ahdr == ')')
                {
                    prp_rlt(push(ahdr));
                }
                else if (ahdr == '^')
                {
                    prp_rlt(push(ahdr));
                }
                else if (ahdr == '*' || ahdr == '/')
                {
                    prp_rlt(push(ahdr));
                }
                else if (ahdr == '+' || ahdr == '-')
                {
                    prp_rlt(push(ahdr));
                }
                else 
                {
                    prp_rlt(push(ahdr));
                }
            }
        }
    }

    // printf("\nhasil angka: ");
    // while (is_empty(rlt))
    // {
    //     printf("%c", rlt->data[rlt->top]);
    //     pop(rlt);
    // }

    printf("\n");

    return 0;
}

void create_empty()
{
    sml.top = 0;
}

void push(char c)
{
    sml.top = sml.top + 1;
    sml.data[sml.top] = c;
}

char pop()
{
    char tmp;
    tmp = sml.data[sml.top];
    sml.top = sml.top - 1;
    return tmp;
}

int is_empty()
{
    if (sml.top == 0)
        return 1;
    else 
        return 0;
}


int is_full(int c)
{
    if (c == MAX_LENGTH)
        return 1;
    else
        return 0;
}

void prp_rlt(char c)
{

}