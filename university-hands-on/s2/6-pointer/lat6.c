#include <stdio.h>

int jumlah(char *kal);

int main()
{
    char string[80];

    printf("masukkan sebuah kata = ");
    scanf("%s", &string);
    printf("jumlah karakter = %d\n", jumlah(string));
}

int jumlah(char *kal)
{
    int x = 0;
    for (; *kal != '\0'; *kal++)
    x++;
    return x;
}