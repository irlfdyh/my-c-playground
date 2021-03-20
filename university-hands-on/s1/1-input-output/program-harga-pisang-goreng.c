//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

#define hargaPisang 1000
#define hargaBakwan 1500

int main() {

    int totalBayar, totalPisang, totalBakwan, jumlahBakwan;


    printf("Mang Dudung membeli 3 pisang dan 5 bakwan \n");
    totalPisang = hargaPisang * 3;
    totalBakwan = hargaBakwan * 5;
    totalBayar = totalPisang+totalBakwan;
    printf("pak dudung harus membayar %d\n", totalBayar);

    return 0;
}