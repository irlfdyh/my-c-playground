#include <stdio.h>

void cetak_deret_bilangan();
int x, y, sum;

int main() {
    do {
        printf("masukkan sebuah bilangan positif = ");
        scanf("%d", &y);
    } while (y <= 0);
    cetak_deret_bilangan();
}

void cetak_deret_bilangan() {
    printf("%d ", ++x);
    sum += x;

    if (x%2 == 0) {
        printf("%d ", sum);
        sum = 0;
    }

    if (x < y) {
        cetak_deret_bilangan();
    }
}