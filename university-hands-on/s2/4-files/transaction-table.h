#include <stdio.h>
#include <string.h>
#include "transaction-file.h"

#define DATE_LIMIT 13
#define NAME_LIMIT 25
#define PRICE_LIMIT 13
#define AMOUNT_LIMIT 6
#define TOTAL_LIMIT 11

/**
    cp = 1
    cp += 13 - 11 = 2
**/

int nms(int number);
void h_mover(int hs);

void print_table_header()
{
    printf("   tanggal    |        nama produk        |     harga     | jumlah | harga total \n");
    printf("--------------+---------------------------+---------------+--------+-------------\n");
}

void print_table_record()
{
    int h_position = 1;

    h_mover(h_position);
    printf("%s", product.date);

    h_position += (DATE_LIMIT - strlen(product.date) - 1);
    h_mover(h_position);
    printf("|");
    h_position = 1;

    h_mover(h_position);
    printf("%s", product.name);

    h_position += (NAME_LIMIT - strlen(product.name));
    h_mover(h_position);
    printf("|");
    h_position = 1;

    h_mover(h_position);
    printf("%d", product.price);

    h_position += (PRICE_LIMIT - nms(product.price));
    h_mover(h_position);
    printf("|");
    h_position = 1;

    h_mover(h_position);
    printf("%d", product.amount);

    h_position += (AMOUNT_LIMIT - nms(product.amount));
    h_mover(h_position);
    printf("|");
    h_position = 1;

    h_mover(h_position);
    printf("%d", product.price_total);

    printf("\n");
}

void print_list_record()
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
    print_table_header();
    while (read_transaction_data() == 1)
    {
        print_table_record();
    }
    printf("\n");
    close_file();
}

void h_mover(int hs)
{
    int hp;
    for (hp = 0; hp < hs; hp++)
    {
        printf(" ");
    }
}

int nms(int number)
{
    int cnt = 0;
    int nbr_chc = number;
    while (nbr_chc != 0)
    {
        nbr_chc /= 10;
        ++cnt;
    }
    return cnt;
}