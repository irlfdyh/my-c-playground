#include <stdio.h>

void jumlah(float *alm_a, float *alm_b, float *alm_c);

void main() 
{

    float a, b, c;
    float *p_c;
    
    printf("input bilangan pertama : ");
    scanf("%f", &a);

    printf("input bilangan kedua : ");
    scanf("%f", &b);

    p_c = &c;

    jumlah(&a, &b, p_c);
    printf("hasil kali kedua bilangan = %.2f", *p_c);
    printf("\n");

}

void jumlah(float *alm_a, float *alm_b, float *alm_c)
{
    *alm_c = *alm_a**alm_b;
}