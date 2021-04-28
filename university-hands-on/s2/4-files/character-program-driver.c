#include <stdlib.h>
#include "character-program-file.h"

void starter_program();
void operation_menu();
void operation_determiner();
void operation_processor(int code);
int show_available_file();
void opr_create_file();
void opr_insert_file();
void opr_read_file_content();
void opr_manipulate_file();
void throw_exception();

int main()
{
    starter_program();
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
            opr_create_file();
            break;
        }
        case 2 : 
        {
            opr_read_file_content();
            break;
        }
        case 3 : 
        {
            opr_manipulate_file();
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

void opr_create_file()
{
    char fn[25];
    int rc;

    printf("Masukkan nama file dengan format txt (contoh.txt)\n");
    printf("Nama file = "); scanf("%s", fn);

    rc = create_file(fn);

    if (rc == SUCCESS)
    {
        puts("\nFile berhasil dibuat\n");
        opr_insert_file();
    }
    else if (rc == FAILED)
    {
        puts("\nGagal membuat file\n");
        operation_menu();
    }

}

void opr_insert_file()
{
    char dt;
    printf("Masukkan isi file, gunakan '.' lalu ENTER untuk mengakhiri input file\n");
    do
    {
        scanf("%c", &dt);
        insert_file_content(dt);
    }
    while (dt != '.');
    close_file_content();
    operation_menu();
}

void opr_read_file_content()
{
    char fq[100], rst;
    int status, disc_status;

    disc_status = show_available_file();

    if (disc_status == 0)
    {
        puts("File belum tersedia, coba untuk membuat file di menu 1.\n");
    }
    else
    {
        printf("\nMasukkan nama file yang ingin dibaca = ");
        scanf("%s", fq);

        status = configure_file_content(fq, "r");

        if (status == SUCCESS)
        {
            while ((rst = read_file_content()) != EOF)
            {
                putchar(rst);
            }
            puts("\n");
        }
        else if (status == FAILED)
        {
            throw_exception();
        }
    }
    operation_menu();
}

void opr_manipulate_file()
{
    char fq[100], rst;
    int status, disc_status;

    disc_status = show_available_file();

    if (disc_status == 0)
    {
        puts("File belum tersedia, coba untuk membuat file di menu 1.\n");
    }
    else
    {
        printf("\nMasukkan nama file yang akan dimanipulasi = ");
        scanf("%s", fq);

        status = configure_file_content(fq, "r");

        if (status == SUCCESS)
        {
            while ((rst = read_file_content()) != EOF)
            {
                putchar(toupper(rst));
            }
            puts("\n");
        }
        else if (status == FAILED)
        {
            throw_exception();
        }
    }
    operation_menu();
}

int show_available_file()
{
    int file_discovery = 0;
    if (configure_file_registry("rb") == NULL)
    {
        // Handle something
    }
    else 
    {
        while (retretive_registered_file() == 1)
        {
            printf("%s\n", bfr);
            file_discovery++;
        }
        close_file_registry();
    }
    return file_discovery;
}

void throw_exception()
{
    puts("\nterjadi masalah saat melakukan aksi\n");
}