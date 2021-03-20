//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    int i;

    // Use for to print odds number
    for (i = 10; i <= 20; i += 2) {
        printf("%d\n", i);
    }

    // Use do while to print odds number
    i = 10;
    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= 20)

}