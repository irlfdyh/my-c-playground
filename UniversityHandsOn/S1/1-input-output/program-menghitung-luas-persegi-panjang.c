//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    float panjang, lebar, luas;

    printf("\nProgram menghitung luas persegi panjang\n\n");

    printf("Masukkan lebar persegi       : ");
    scanf("%f", &lebar);

    printf("Masukkan panjang persegi       : ");
    scanf("%f", &panjang);

    luas = panjang * lebar;
    printf("Luas Persegi Panjang        : %.2f\n", luas);

    return 0;
}