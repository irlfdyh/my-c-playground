#include <stdio.h>

int main() {

    int i, j;

    /**

        Output : *****
                 ****
                 ***
                 **
                 *

    */
    for (i = 1; i <= 5; i++) {
        for (j = 5; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
    
    /**

        Output : *
                 **
                 ***
                 ****
                 *****

    */
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    /**

        Output : *
                 **
                 ***
                 ****
                 *****

    */
    // i = 1;
    // do {
    //     printf("\n");
    //     for (j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     i++;
    // } while (i <= 5);

    return 0;
}