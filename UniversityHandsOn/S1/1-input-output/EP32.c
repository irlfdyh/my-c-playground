//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    int a, b;

    printf("Masukkan bilangan pertama   = ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua     = ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d mod %d = %d\n", a, b, a%b);

    return 0;

}