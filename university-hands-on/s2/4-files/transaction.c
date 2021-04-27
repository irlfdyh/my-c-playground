#include <stdlib.h>
#include <string.h>
#include "transaction-table.h"

void starter_program();
void operation_menu();
void operation_determiner();
void operation_processor(int code);
void insert_data();
void show_all_data();
void show_data_by_date();
void throw_exception();

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
    puts("0. Keluar");
    operation_determiner();
}

void operation_determiner()
{
    short int option;
    printf("Pilihan : "); scanf("%hd", &option);
    operation_processor(option);
}

void operation_processor(int option)
{
    puts("");
    switch (option)
    {
        case 0 : 
        {
            puts("Keluar.");
            exit(1);
            break;
        }
        case 1 : 
        {
            insert_data();
            break;
        }
        case 2 : 
        {
            show_all_data();
            break;
        }
        case 3 : 
        {
            show_data_by_date();
            break;
        }
        default : 
        {
            puts("Pilihan tidak valid!!");
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
        throw_exception();
    }

    puts("Masukkan data transaksi");
    printf("Tanggal transaksi   : ");
    scanf("%s", product.date);
    printf("Nama Produk         : ");
    scanf("%s", product.name);
    printf("Harga Produk        : ");
    scanf("%d", &price_holder);
    printf("Jumlah Produk       : ");
    scanf("%d", &amount_holder);

    product.price = price_holder;
    product.amount = amount_holder;
    product.price_total = price_holder * amount_holder;

    save_transaction_data(product);
    puts("\nOK\n");
    operation_menu();
}

void show_all_data()
{
    if (configure_file("rb") == NULL)
    {
        throw_exception();
    }
    print_transaction_data();
    operation_menu();
}

void show_data_by_date()
{
    char q[25];
    int fc = 0;

    if (configure_file("rb") == NULL)
    {
        throw_exception();
    }

    printf("Masukkan Tanggal (12-Apr-2021) = ");
    scanf("%s", q);

    while (read_transaction_data() == 1)
    {
        if (strcmp(product.date, q) == 0)
        {
            print_record();
            fc++;
        }
    }

    if (fc == 0)
    {
        puts("\nData tidak ditemukan\n");
    }

    operation_menu();

}

void throw_exception()
{
    puts("Data belum tersedia, coba untuk memasukkan data terlebih dahulu di menu 1.\n");
    operation_menu();
}