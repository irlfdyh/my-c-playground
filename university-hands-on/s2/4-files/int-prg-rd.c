#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fl;
    int scr;
    int num = 0;

    fl = fopen("fls/int-data.dat", "rb");

    if (fl == NULL) 
    {
        puts("File gagal dibuka!");
        exit(1);
    }

    puts("isi file data.dat adalah : ");

    do
    {
        scr = getw(fl);
        if (feof(fl) != NULL) break;
        printf("%2d. %d\n", ++num, scr);
    } while (1);
    
    fclose(fl);

}