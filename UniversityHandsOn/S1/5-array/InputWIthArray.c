//
// Created by irshalfir on 21/12/20.
//

#include <stdio.h>

int main() {

    int i, score[10], count = 0;
    float average;

    for (i = 0; i <= 4; i++) {
        printf("Data nilai ke - %d = ", i+1);
        scanf("%d", &score[i]);
        count += score[i];
    }

    average = (float) count/i;
    printf("Jumlah semua bilangan = %d \n", count);
    printf("Rata rata             = %.2f\n", average);

    return 0;
}