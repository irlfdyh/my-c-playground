#include <stdio.h>

void jumlah(float x, float y, float *ac);

int main() 
{

    float a, b, c;
    float *pc = &c;

    printf("input bilangan pertama = ");
    scanf("%f", &a);

    printf("input bilangan kedua = ");
    scanf("%f", &b);

    jumlah(a, b, pc);

    printf("\nJumlah kedua bilangan = %.3f\n", *pc);

    return 0;
}

void jumlah(float x, float y, float *ac)
{
    *ac = x + y;
}