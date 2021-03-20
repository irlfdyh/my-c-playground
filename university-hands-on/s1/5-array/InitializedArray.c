//
// Created by irshalfir on 21/12/20.
//

#include <stdio.h>

int main() {

    static int day_values[12] = {
            31,28,31,30,31,30,
            31,31,30,31,30,31
    };

    int month, year, number_of_days;

    printf("Masukkan data bulan [1..12] : ");
    scanf("%d", &month); fflush(stdin);

    printf("Masukkan tahunnya           : ");
    scanf("%d", &year); fflush(stdin);

    if (month == 2) {
        if ((year % 4 == 0) && (year % 100 != 0)) {
            number_of_days = 29;
        } else {
            number_of_days = 28;
        }
    } else {
        number_of_days = day_values[month - 1];
    }

    printf("Jumlah hari = %d", number_of_days);

    return 0;
}
