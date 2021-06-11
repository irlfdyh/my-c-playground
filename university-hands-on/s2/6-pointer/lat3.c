#include <stdio.h>

void main() {
    float a1, a2, a3;
    float *p_a3;

    printf("input bilangan pertama : ");
    scanf("%f", &a1);

    printf("input bilangan kedua : ");
    scanf("%f", &a2);

    p_a3 = &a3;
    *p_a3 = a1 + a2;

    printf("\nNilai a3 (dari variabel) : %.3f", a3);
    printf("\nNilai a3 (dari pointer) : %.3f", *p_a3);
    printf("\n");
}