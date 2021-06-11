#include <stdio.h>

void main() {
    int x; 
    int *ptr_x;

    x = 10.2;
    ptr_x = &x;

    printf("\n\nMenggunakan variabel biasa : ");
    printf("\nNilai dari x = %d", x);
    printf("\nAlamat dari x = %u", &x);
    printf("\n\nMenggunakan pointer : ");
    printf("\nnilai dari x di ptrx = %d", *ptr_x);
    printf("\nAlamat dari x di ptrx = %u\n", ptr_x);

}