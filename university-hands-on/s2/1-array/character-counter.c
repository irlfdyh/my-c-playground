#include "stdio.h"

int main() {

    char word[] = "saya adalah mahasiswa SI FTIK UNIKOM 2017";
    int count = 0, i;

    for (i = 0; word[i] != '\0'; i++) {
        count++;
    }

    printf("Kalinat %s mempunyai %d huruf\n", word, count);
    printf("dan simpan dalam %d bytes\n", count+1);

}