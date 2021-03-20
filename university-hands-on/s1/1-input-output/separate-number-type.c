//
// Created by irshalfir on 06/12/20.
//
#include <stdio.h>

int main() {

    int number, thousand, hundred, dozens, unit;

    printf("Memisahkan Angka ke Pecahannya\n");
    printf("------------------------------\n\n");

    printf("Masukkan angka dalam RIBUAN  = "); scanf("%d", &number);

    thousand = number/1000;
    hundred = (number/100)%10;
    dozens = (number%100)/10;
    unit = (number%100)%10;

    if (thousand < 10) {
        printf("%d RIBUAN %d RATUSAN %d PULUHAN %d SATUAN\n", thousand, hundred, dozens, unit);
    } else {
        printf("Tidak bisa menampilkan angka puluhan ribu\n");
    }

    return 0;
}

