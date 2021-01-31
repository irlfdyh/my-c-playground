//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

#define minutePerHour 60
#define secondPerMinute 60
#define pulsaPrice 150.0

int main() {

    int startHour, startMinute, startSecond,
        endHour, endMinute, endSecond,
        totalHour, totalMinute, totalSecond,
        totalSecondStart, totalSecondEnd, totalSecondCall,
        pulsaTotal;
    float paymentTotal;

    printf("Mulai Bicara    = Jam <spasi> Menit <spasi> Detik\n");
    printf("Mulai Bicara    = ");
    scanf("%d", &startHour);
    scanf("%d", &startMinute);
    scanf("%d", &startSecond);

    printf("\nSelesai Bicara  = Jam <spasi> Menit <spasi> Detik\n");
    printf("Selesai Bicara  = ");
    scanf("%d", &endHour);
    scanf("%d", &endMinute);
    scanf("%d", &endSecond);

    // convert all time to second time, then increase the total second time
    totalSecondStart = ((startHour*minutePerHour)*secondPerMinute) + (startMinute*secondPerMinute) + startSecond;
    totalSecondEnd = ((endHour*minutePerHour)*secondPerMinute) + (endMinute*secondPerMinute) + endSecond;

    if (totalSecondEnd > totalSecondStart) {

        // Get total user call time
        totalSecondCall = totalSecondEnd - totalSecondStart;

        // Computate total hour
        totalHour = (totalSecondCall/secondPerMinute)/minutePerHour;
        // Computate total minute
        totalMinute = ((totalSecondCall - ((totalHour*minutePerHour)*secondPerMinute))/secondPerMinute);
        // Computate total Second
        totalSecond = totalSecondCall - (((totalHour*minutePerHour)*secondPerMinute) + (totalMinute*secondPerMinute));

        // Computate pulsa total
        pulsaTotal = totalSecondCall/secondPerMinute;

        // if call 1 minute more, pulsa total increased by 1
        if (totalSecondCall%secondPerMinute > 0) {
            pulsaTotal += 1;
        }

        paymentTotal = pulsaTotal*pulsaPrice;

        printf("\n\n-------------------------------------\n");
        printf("TOTAL DURASI    = %d Jam : %d Menit : %d Detik\n", totalHour, totalMinute, totalSecond);
        printf("PULSA           = %d\n", pulsaTotal);
        printf("TOTAL BAYAR     = Rp.%.2f\n\n", paymentTotal);

    } else {
        printf("\n\n-------------------------------------\n");
        printf("\nWaktu yang dimasukkan tidak valid!!\n\n");
    }

    return 0;
}