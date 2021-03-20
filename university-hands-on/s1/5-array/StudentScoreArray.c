//
// Created by irshalfir on 23/12/20.
//

#include <stdio.h>

int main() {

    int i, studentNumber, examScore[20];
    char nim[3][20], studentName[15][20], qLetter[20];

    do {

        printf("Jumlah mahasiswa [maks = 20] = ");
        scanf("%d", &studentNumber); fflush(stdin);

        if (studentNumber > 20) {
            printf("Tidak boleh lebih dari 20 mahasiswa...SILAHKAN TEKAN ENTER...!\n\n");
        }

    } while (studentNumber > 20);

    for (i = 0; i < studentNumber; i++) {
        printf("\nData mahasiswa ke-%d\n", i+1);
        printf("Nomor Induk Mahasiswa = "); scanf("%s", &nim[i]); fflush(stdin);
        printf("Nama Mahasiswa        = "); scanf("%s", studentName[i]); fflush(stdin);
        printf("Nilai ujian           = "); scanf("%d", &examScore[i]); fflush(stdin);

        if (examScore[i] >= 78) {
            qLetter[i] = 'A';
        } else if (examScore[i] >= 68) {
            qLetter[i] = 'B';
        } else if (examScore[i] >= 55) {
            qLetter[i] = 'C';
        } else if (examScore[i] >= 35) {
            qLetter[i] = 'D';
        } else {
            qLetter[i] = 'E';
        }
    }

    puts("\n\nDAFTAR NILAI UJIAN LAB. PERMROGRAMAN DASAR");
    printf("\n");
    puts("NO    NIM     NAMA MAHASISWA      N.UJIAN     HM");
    puts("------------------------------------------------");

    for (i = 0; i < studentNumber; i++) {
        printf("%d     %s     %s                %d          %c\n", i+1, nim[i], studentName[i], examScore[i], qLetter[i]);
    }

}

