//
// Created by irshalfir on 21/12/20.
//

#include <stdio.h>

int main() {

    int score[5], i;

    score[0] = 1;
    score[1] = 2;
    score[2] = 3;
    score[3] = 4;
    score[4] = 5;

    for (i = 0; i <= 4; i++) {
        printf("value at %d : %d\n", i, score[i]);
    }

    return 0;
}
