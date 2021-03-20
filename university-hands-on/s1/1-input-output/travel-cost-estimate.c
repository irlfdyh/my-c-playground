//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

#define FUEL_PRICE 6700

int main() {

    float priceTotal, fuelTotal;
    int travelDistance;

    travelDistance = 130;

    fuelTotal = travelDistance/18.0;
    priceTotal = fuelTotal*FUEL_PRICE;

    printf("Menghitung Estimasi Biaya Perjalanan\n");
    printf("------------------------------------\n\n");

    printf("Jarak tempuh dari jakarta ke bandung    : %d KM\n", travelDistance);

    printf("Takaran bensin yang diperlukan          : %.2f L\n", fuelTotal);
    printf("Uang yang diperlukan                    : Rp.%.2f\n", priceTotal);

    return 0;
}