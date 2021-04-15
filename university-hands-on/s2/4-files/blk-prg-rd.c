#include <stdio.h>
#include <stdlib.h>

#define BLOCK_COUNT 1

int main()
{
    FILE *fl;
    char ans;
    
    struct bk_dt
    {
        char title[25];
        char author[20];
        int amount;
    } book;

    fl = fopen("fls/daftar-buku.dat", "rb");

    if (fl == NULL)
    {
        puts("File gagal dibuka!");
        exit(1);
    }

    while (fread(&book, sizeof(book), BLOCK_COUNT, fl) == BLOCK_COUNT)
    {
        printf("%-25s %-20s %2d\n", book.title, book.author, book.amount);
    }

    fclose(fl);

}