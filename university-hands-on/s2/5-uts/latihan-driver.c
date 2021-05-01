#include <string.h>
#include <stdlib.h>
#include "latihan-file.h"
#include "latihan-util.h"

#define TRUE 1
#define FALSE 0

void get_user_input();
void print_user_input();
int check_condition();
void throw_exception();

char answ;
int cntr;

int main()
{
    get_user_input();
    print_user_input();
    return 0;
}

void get_user_input()
{
    int num;
    if (configure_file(ABS_FILE, OPR_WRITE) == NULL)
    {
        throw_exception();
    }
    printf("Masukkan angka (maksimal 10)\n");
    do
    {
        cntr++;
        printf("Masukkan angka          : ");
        scanf("%d", &num);

        input_abs_file(num);

        printf("Ada data lagi? (Y/N)    : ");
        scanf(" %c", &answ);
    } while (check_condition() == TRUE);
    close_file(ABS_FILE);
}

void print_user_input()
{
    int val, i;
    if (configure_file(ABS_FILE, OPR_READ) == NULL)
    {
        throw_exception();
    }
    printf("\nAngka yang telah dimasukkan :\n");
    while ((val = read_abs_file()) != EOF)
    {
        printf("%d ", val);
    }
    printf("\n");
    close_file(ABS_FILE);
}

int check_condition()
{
    return ((answ == 'Y' || answ == 'y') && cntr < 10);
}

void throw_exception()
{
    puts("Ada permasalahan saat mengkonfigurasi file");
    exit(1);
}