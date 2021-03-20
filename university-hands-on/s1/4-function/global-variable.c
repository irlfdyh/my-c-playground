//
// Created by irshalfir on 12/01/21.
//
#include <stdio.h>

void satu(void);
int i = 10;

int main () {
    printf("nilai i sebelum satu() dipanggil %d\n", i);
    satu(); i = i + 3;
    printf("nilai i setelah satu() dipanggil = %d ", i);
}

char x;
void satu (void) {
    int i;
    i = 5; x += 3;
    printf("nilai i dalam satu() = %d\n", i);
}

float z;

