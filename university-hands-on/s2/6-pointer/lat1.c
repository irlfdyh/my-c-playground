#include <stdio.h>

void jumlah(int *pa, int *pb, int *pc);

int main() 
{
    int a, b, c;

    printf("input bilangan pertama = "); scanf("%d",&a);
    printf("input bilangan kedua = "); scanf("%d",&b);
    printf("input bilangan ketiga = "); scanf("%d",&c);

    jumlah(&a, &b, &c);

    puts("sekembalinya dari jumlah() menjadi: ");
    printf("bilangan pertama menjadi = %d\n",a);
    printf("bilangan kedua menjadi = %d\n",*&b);
    printf("bilangan ketiga menjadi = %d\n",*&c);

    return 0;
}

void jumlah(int *pa, int *pb, int *pc) 
{
    *pa = *pa*2;
    *pb = *pb*2;
    *pc = *pc*2;
}