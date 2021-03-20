#include <stdio.h>

void main() {

    int index, nilai[10];

    printf("Input nilai 10 mahasiswa\n");

    for (index = 0; index < 10; index++) {
        printf("Mahasiswa %d: ", index+1);
        scanf("%d", &nilai[index]);
    }

    printf("\n\nNilai mahasiswa yang telah di input: \n");
    for (index = 0; index < 10; index++) {
        printf("%d\n", nilai[index]);
    }

}