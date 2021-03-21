#include <stdio.h>

#define prd_prc 80

int main() {

    int cntr, pcnt[100];

    puts("Daftar harga fotokopi per lembar\n");
    puts("|-------------------------------------|");
    puts("|     Jumlah      |       Harga       |");
    puts("|-------------------------------------|");

    for (cntr = 0; cntr <= 100; cntr++) {
        printf("|        %d        |         %d         |\n", cntr, cntr*prd_prc);
    }

    puts("|-------------------------------------|");

    return 0;
}