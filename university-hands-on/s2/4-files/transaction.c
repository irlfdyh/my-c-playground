#include <stdlib.h>
#include "transaction-table.h"
#include "transaction-file.h"

/*
    transaction data
    date, product name, price, amount, total price.
*/

void starter_program();
void operation_menu();
void operation_determiner();
void operation_processor(int code);

int main()
{
    starter_program();
}

void starter_program()
{   
    puts("PROGRAM PENCATATAN TRANSAKSI\n");
    operation_menu();
}

void operation_menu()
{
    puts("Pilih operasi yang akan dilakukan :");
    puts("1. Menambahkan data transaksi");
    puts("2. Melihat data transaksi");
    puts("3. Melihat data transaksi berdasarkan tanggal");
    operation_determiner();
}

void operation_determiner()
{
    int option;
    printf("Pilihan : "); scanf("%d", &option);

    operation_processor(option);
}

void operation_processor(int option)
{
    puts("");
    switch (option)
    {
        case 1 : 
        {
            puts("Menambahkan data");   
            break;
        }
        case 2 : 
        {
            puts("Melihat data transaksi");
            table_printer();
            break;
        }
        case 3 : 
        {
            puts("Melihat data transaksi berdasarkan tanggal");   
            table_printer();
            break;
        }
        default : 
        {
            puts("Pilihan tidak valid");
            puts("Ulangi penginputan\n");
            operation_determiner();
            break;
        }
    }
}

