#include <stdio.h>
#include <ctype.h>

void starter_program();
void operation_menu();
void operation_determiner();
void operation_processor(int code);

int main()
{
    return 0;
}

void starter_program()
{   
    puts("\nPROGRAM PENGOLAHAN KARAKTER\n");
    operation_menu();
}

void operation_menu()
{
    puts("Pilih operasi yang akan dilakukan :");
    puts("1. Membuat file");
    puts("2. Membaca isi file");
    puts("3. Memanipulasi isi file");
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
            // create file here;
            break;
        }
        case 2 : 
        {
            // read file here;
            break;
        }
        case 3 : 
        {
            // manipulate file here
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