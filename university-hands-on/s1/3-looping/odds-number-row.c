//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    int number;

    for (number = 20; number <= 100; number++) {
        if (number % 2 == 0) {
            if (number % 5 == 0) {
                printf("%d ", number);
            }
        }
    }

    return 0;
}