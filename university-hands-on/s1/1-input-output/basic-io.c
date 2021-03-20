//
// Created by irshalfir on 06/12/20.
//

#include <stdio.h>

int main() {

    int tl,ts,umur;
    char nama[20];

    printf("Siapa nama saudara?         : ");
    scanf("%s", nama);
    printf("Tahun berapa anda lahir?    : ");
    scanf("%d" ,&tl);
    printf("Tahun Berapa sekarang?      : ");
    scanf("%d" ,&ts);

    umur=ts-tl;

    printf("Saudara %s sekarang berumur %d Tahun\n",nama,umur);

    return 0;
}