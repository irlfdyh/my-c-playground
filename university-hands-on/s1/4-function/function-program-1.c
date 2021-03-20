#include <stdio.h>

// Function definition
int result(int a, int b);

int main() {
    int x, y;

    printf("Masukkan bilangan pertama   : ");
    scanf("%d", &x); fflush(stdin);
    printf("Masukkan bilangan kedua     : ");
    scanf("%d", &y); fflush(stdin);

    printf("%d + %d = %d", x, y, result(x,y));
    printf("\n");
    // update x, y values
    x=3; y=7;
    printf("%d + %d = %d", x, y, result(x,y));
}

int result(int a, int b) {
    return a+b;
}
