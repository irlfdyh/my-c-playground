#include <stdio.h>
#include <stdlib.h>

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

    fl = fopen("fls/daftar-buku.dat", "wb");

    if (fl == NULL) 
    {
        puts("file gagal diciptakan!!");
        exit(1);
    }

    do
    {
        // printf("Judul Buku      = "); fgets(book.title, 25, stdin);
        // printf("Nama Pengarang  = "); fgets(book.author, 20, stdin);
        printf("Judul Buku      = "); gets(book.title);
        printf("Nama Pengarang  = "); gets(book.author);
        printf("Jumlah Buku     = "); scanf("%d", &book.amount);

        fwrite(&book, sizeof(book), 1, fl);

        printf("\nAda data buku lagi? (Y/T) ");
        scanf(" %c", &ans);
    } while (ans == 'Y' || ans == 'y');

    fclose(fl);

    return 0;
}