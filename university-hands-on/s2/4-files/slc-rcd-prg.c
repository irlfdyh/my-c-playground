#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book_data
{
    char title[25];
    char author[20];
    int amount;
} book;

FILE *fl;
char reply;
int record_number, read_result;
long int offset_byte;

int main()
{

    fl = fopen("fls/DAFBUKU.DAT", "rb");
    if (fl == NULL)
    {
        puts("File tidak dapat dibuka..!!");
        exit(1);
    }

    reply = 'Y';
    while (reply == 'Y' || reply == 'y')
    {
        printf("Nomor record dari data yang ingin anda ketahui = ");
        scanf("%d", &record_number);

        offset_byte = (record_number - 1) * sizeof(book);
        fseek(fl, offset_byte, SEEK_SET);

        read_result = fread(&book, sizeof(book), 1, fl);
        if (read_result == 0)
        {
            puts("Nomor record tidak ditemukan!!");
            continue;
        }

        printf("Judul buku  = %-s\n", book.title);
        printf("Pengarang   = %-s\n", book.author);
        printf("Jumlah buku = %d\n", book.amount);
        printf("\n Mau mencari informasi lagi? (Y/T) ");
        scanf(" %c", &reply);
    }

    fclose(fl);

    return 0;
}