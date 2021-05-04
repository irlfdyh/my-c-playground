#include <string.h>
#include <stdlib.h>
#include "latihan-file.h"
#include "latihan-util.h"

#define TRUE 1
#define FALSE 0

void get_user_input();
void print_user_input();
void insert_sorted_number();
void read_sorted_number();
int check_condition();
void throw_exception();
void require_search_number();

char answ;
int cntr, num[10], arr_size;

int main()
{
    get_user_input();
    print_user_input();
    insert_sorted_number();
    read_sorted_number();
    require_search_number();
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
    int val, i = 0;
    if (configure_file(ABS_FILE, OPR_READ) == NULL)
    {
        throw_exception();
    }
    printf("\nAngka yang telah dimasukkan :\n");
    while ((val = read_abs_file()) != EOF)
    {
        printf("%d ", val);
        num[i] = val;
        i++;
    }
    arr_size = i;
    printf("\n");
    close_file(ABS_FILE);
}

void insert_sorted_number()
{
    if (configure_file(SRT_FILE, OPR_WRITE) == NULL)
    {
        throw_exception();
    }
    
    sort_number(num, arr_size);

    for (int i = 0; i < arr_size; i++)
    {
        input_srt_file(num[i]);
    }

    close_file(SRT_FILE);
}

void read_sorted_number()
{
    int val;
    if (configure_file(SRT_FILE, OPR_READ) == NULL)
    {
        throw_exception();
    }

    printf("\nAngka yang telah diurutkan secara descending :\n");
    while((val = read_srt_file()) != EOF)
    {
        printf("%d ", val);
    }
    printf("\n");
    close_file(SRT_FILE);
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

void require_search_number()
{
    int q = 0, *rat = 0;

    printf("\nMasukkan angka yang ingin dicari : ");
    scanf("%d", &q);

    int idx = search_number(num, 0, arr_size, q, &rat);

    if (idx != NOT_FOUND)
    {
        printf("\nAngka ditemukan pada index ke %d, dengan perbandingan sebanyak %dx\n", idx, rat);
    }
    else
    {
        printf("\nAngka tidak ditemukan!!\n");
    }
}