//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    int celcius;
    float reamur, farenheit, kelvin;

    printf("masukkan suhu dalam celcius = "); scanf("%d", &celcius);

    reamur = (celcius/5)*4;
    farenheit = ((celcius/5)*9)+32;
    kelvin = 273+celcius;

    printf("farenheit   = %.2f f\n", farenheit);
    printf("reamur      = %.2f r\n", reamur);
    printf("kelvin      = %.2f k\n", kelvin);

    return 0;
}