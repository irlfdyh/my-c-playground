//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

#define dollar 14000

int main() {

    int stayTime, checkinDate, checkoutDate,
        cost, payTotal, cashback, cash;
    char name;

    printf("SELAMAT DATANG DI HOTEL DIPATI UKUR\n");
    printf("------------------------------\n\n");
    printf("Nama Tamu           = "); scanf("%s", &name);
    printf("Tanggal check in    = "); scanf("%d", &checkinDate);
    printf("Tanggal check out   = "); scanf("%d", &checkoutDate);

    stayTime = checkoutDate-checkinDate;
    cost = dollar;

    printf("Tarif inap / hari   = %d\n", cost);
    printf("------------------------------\n");
    printf("Lama menginap       = %d\n", stayTime);

    payTotal = cost * stayTime;

    printf("Total bayar         = %d\n", payTotal);
    printf("Cash                = "); scanf("%d", &cash);
    printf("------------------------------\n");

    cashback = cash-payTotal;

    printf("Cashback            = %d\n", cashback);

    return 0;
}