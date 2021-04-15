#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fl;
    char c;

    fl = fopen("fls/coba.txt", "r");

    if (fl == NULL) 
    {
        printf("File tidak dapat dibuka");
        exit(1);
    }

    while ((c = fgetc(fl)) != EOF) 
    {
        putchar(c);
    }

    puts("");

    fclose(fl);

    return 0;
}