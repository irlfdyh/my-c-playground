#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fl;
    char kar;
    int code;

    struct
    {
        int x;
        int y;
    } coordinate;

    fl = fopen("fls/koordinat.dat", "rt");

    if (fl == NULL)
    {
        puts("File tidak dapat dibuka!");
        exit(1);
    }

    while ((code = fscanf(fl, "%5d%5d%c", &coordinate.x, &coordinate.y, &kar)) != EOF)
    {
        if (code != 3)
        {
            puts("Program dihentikan, sebab format dalam file salah...!");
            exit(1);
        }
        printf("%5d%5d\n", coordinate.x, coordinate.y);
    }

    fclose(fl);

    return 0;
}