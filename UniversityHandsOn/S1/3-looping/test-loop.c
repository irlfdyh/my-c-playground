//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    int j, i, k;

    /**
    *  2 4 4 6 6 6 8 8 8 8 10 10 10 10 10
    */

    // for (i = 1; i <= 10; i++) {
    //     for (j = 1; j <= i/2; j++) {
    //         if (i % 2 == 0) {
    //              printf("%d ", i);
    //         }
    //     }
    // }

    printf("\n\n");

    /**
    * 10 8 8 6 6 6 4 4 4 4 2 2 2 2 2
    */

    k = 1;
    for (i = 10; i >= 1; i--) {
        if (i % 2 == 0) {
            for (j = 1; j <= k; j++) {
                printf("%d ", i);
            }
            k++;
        }
    }

    printf("\n\n");

    /**
    * 10 1 8 2 6 3 4 4 2 5
    */

    j = 0;
    for (i = 10; i >= 2; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
            j++;
            printf("%d ", j);
        }
    }

}