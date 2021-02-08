//
// Created by irshalfir on 22/12/20.
//

#include <stdio.h>

void int_array_test() {

    int tree[2][3], i, j;

    tree[0][0] = 11;
    tree[0][1] = 12;
    tree[0][2] = 13;

    tree[1][0] = 21;
    tree[1][1] = 22;
    tree[1][2] = 23;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("parent is : %d\nchild is : %d\n\n", i, tree[i][j]);
        }
    }

}

void char_array_test() {

    char tree[10][2], i, j;

    for (i = 0; i < 3; i++) {
        scanf("Input name %s", &tree[i]);
    }

    printf("available name\n");

    for (j = 0; j < 3; j++) {
        printf("%s", tree[j]);
    }

}

int main() {

    int_array_test();
    char_array_test();

    return 0;
}