//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    int i, j;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
    }

    /**

         1  2  2  3  3  3  4  4  4  4  5  5  5  5  5

    */

    printf("\n\n");

    j = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        j += i;
        if (j > i && j % 2 == 1) {
            printf("%d ", j);
            j = 0;
        }
    }

    printf("\n\n");

    return 0;
}