//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>
#include <ctype.h>

#define priceTypeA 15000
#define priceTypeB 20000
#define priceTypeC 25000

int main() {

    char customerName, customerType;
    float pricePerCubic, paymentTotal, usedWaterVolume;

    printf("Nama Pelangan              = "); scanf("%s", &customerName);
    printf("Tipe pelanggan A/B/C       = "); scanf("%s", &customerType);

    customerType = toupper(customerType);

    switch (customerType) {
        case 'A' : pricePerCubic = priceTypeA;
            break;
        case 'B' : pricePerCubic = priceTypeB;
            break;
        case 'C' : pricePerCubic = priceTypeC;
            break;
        default  :
            customerType = 'Z';
            printf("--------------------------------------------------\n");
            printf("Tipe pelanggan tidak ada!!\n");
            break;
    }

    if (customerType != 'Z') {
        printf("Harga per kubik            = Rp.%.2f\n", pricePerCubic);
        printf("Volume air yang digunakan  = "); scanf("%f", &usedWaterVolume);
        printf("--------------------------------------------------\n");

        if (customerType == 'A') {
            paymentTotal = priceTypeA * usedWaterVolume;
        } else if (customerType == 'B') {
            paymentTotal = priceTypeB * usedWaterVolume;
        } else if (customerType == 'C') {
            paymentTotal = priceTypeC * usedWaterVolume;
        }

        printf("TOTAL BAYAR                = Rp.%.2f\n", paymentTotal);
    }

    return 0;
}