#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fl;
    char ans;
    
    struct
    {
        int x;
        int y;
    } coordinate;

    fl = fopen("fls/koordinat.dat", "w");

    if (fl == NULL)
    {
        puts("File tidak dapat dibuka!");
        exit(1);
    }

    do
    {
        puts("Masukkan data koordinat (bilangan integer)");
        puts("Format : posisi x posisi y");
        puts("Contoh : 20 30 [ENTER]");

        scanf("%i %i", &coordinate.x, &coordinate.y);
        fflush(stdin);

        fprintf(fl, "%5i %5i\n", coordinate.x, coordinate.y);

        printf("\nMenyimpan data lagi ? (Y/T) ");
        scanf(" %c", &ans);
    } while(ans == 'y' || ans == 'Y');

    fclose(fl);

    return 0;
}