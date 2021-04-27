#include <stdio.h>
#include "transaction-file.h"

#define DATE_LIMIT 12
#define NAME_LIMIT 25
#define PRICE_LIMIT 12
#define AMOUNT_LIMIT 6
#define TOTAL_LIMIT 12

int sclct(char v[]);
int iclct(int v);

void print_table_header()
{
    printf("    tanggal   |        nama produk        |     harga    | jumlah |  harga total \n");
    printf("--------------+---------------------------+--------------+--------+--------------\n");
}

void print_record()
{
    printf("Tanggal     = %s\n", product.date);    
    printf("Nama Produk = %s\n", product.name);    
    printf("Harga       = %d\n", product.price);
    printf("Jumlah      = %d\n", product.amount);
    printf("Total Harga = %d\n", product.price_total);
    printf("\n");
}

void print_transaction_data()
{
    int i = 0;

    // print_table_header();
    while (read_transaction_data() == 1)
    {
        print_record();
        i++;
    }
    close_file();
}

void mover(int v, int h)
{
    int vp, hp;
    for (vp = 0; vp < v; vp++)
    {
        printf("\n");
    }
    for (hp = 0; hp < h; hp++)
    {
        printf(" ");
    }
}

void print_table_record(int position)
{
    int separator_position;

    mover(position, 1);
    printf("%s", product.date);

    separator_position = DATE_LIMIT - (sizeof(product.date) - 2);
    mover(position, separator_position);
    printf("|");

    mover(position, NAME_LIMIT - (sizeof(product.name) - 1));
    printf("%s", product.name);

    mover(position, NAME_LIMIT - 3);
    printf("|");

    // mover(position, 44);
    // printf("%d", product.price);

    // mover(position, 59);
    // printf("%d", product.amount);

    // mover(position, 68);
    // printf("%d", product.price_total);

}

// void print_size()
// {
//      int arr[] = { 23, 53, 2, 64, 12, 22 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     char arr2[] = "avgk";
//     int n2 = sizeof(arr2) / sizeof(arr[0]);

//     printf("n = %ld\n", n);
//     printf("n2 = %ld\n", sclct(arr2));
// }

// int sclct(char v[])
// {
//     printf("%s\n", v);
//     return sizeof(v);
// }

// int iclct(int v)
// {
//     return sizeof(v);
// }