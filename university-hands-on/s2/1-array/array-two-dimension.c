#include <stdio.h>

void main() {

    int line, column, matrix[5][4];

    printf("------------------------------------\n");
    printf(" Masukkan Nilai Matriks : \n");
    printf("------------------------------------\n");

    for (line = 0; line < 5; line++) {
        for (column = 0; column < 4; column++) {
            printf("matriks [%d][%d] : ", line+1, column+1);
            scanf("%d", &matrix[line][column]);
        }
        printf("\n");
    }

    printf("------------------------------------\n");
    printf(" Isi array 5 x 4 : \n");
    printf("------------------------------------\n");

    for (line = 0; line < 5; line++) {
        for (column = 0; column < 4; column++) {
            printf("%d", matrix[line][column]);
        }
        printf("\n");
    }

}