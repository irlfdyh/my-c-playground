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
void insert_data();
void show_all_data();
void show_data_by_date();
void show_new_data();

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
    puts("2. Melihat semua data transaksi");
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
            insert_data();
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

void insert_data()
{

    int price_holder = 0, amount_holder = 0;

    if (configure_file("a") == NULL)
    {
        puts("Gagal membuka File");
        exit(1);
    }

    puts("Masukkan data transaksi");
    printf("Tanggal transaksi   : ");
    scanf("%s", product.date); fflush(stdin);
    printf("Nama Produk         : ");
    scanf("%s", product.name); fflush(stdin);
    printf("Harga Produk        : ");
    scanf("%d", &price_holder); fflush(stdin);
    printf("Jumlah Produk       : ");
    scanf("%d", &amount_holder); fflush(stdin);

    product.price = price_holder;
    product.amount = amount_holder;
    product.total_price = price_holder * amount_holder;

    save_transaction_data(product);
    
}

void show_new_data()
{
    
}

void show_all_data()
{

}

void show_data_by_date()
{

}