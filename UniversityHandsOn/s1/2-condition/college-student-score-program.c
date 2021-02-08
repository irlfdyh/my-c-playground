//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>

int main() {

    char collegeStudentName[20];
    float quizScore, utsScore, uasScore, taskScore, finalScore;

    printf("Nama Mahasiswa  : "); scanf("%s", &collegeStudentName);
    printf("Nilai Quiz      : "); scanf("%f", &quizScore);
    printf("Nilai Tugas     : "); scanf("%f", &taskScore);
    printf("Nilai UTS       : "); scanf("%f", &utsScore);
    printf("Nilai UAS       : "); scanf("%f", &uasScore);

    finalScore = (0.1*quizScore) + (0.2*taskScore) + (0.3*utsScore) + (0.4*uasScore);

    if (finalScore >= 0.00 && finalScore <= 30.00) {
        printf("\n%s Mendapat Nilai %.2f dengan Huruf Mutu E\n\n", collegeStudentName, finalScore);
    } else if (finalScore >= 31.00 && finalScore <= 45.00) {
        printf("\n%s Mendapat Nilai %.2f dengan Huruf Mutu D\n\n", collegeStudentName, finalScore);
    } else if (finalScore >= 46.00 && finalScore <= 65.00) {
        printf("\n%s Mendapat Nilai %.2f dengan Huruf Mutu C\n\n", collegeStudentName, finalScore);
    } else if (finalScore >= 66.00 && finalScore <= 79.00) {
        printf("\n%s Mendapat Nilai %.2f dengan Huruf Mutu B\n\n", collegeStudentName, finalScore);
    } else if (finalScore >= 80.00 && finalScore <= 100.00) {
        printf("\n%s Mendapat Nilai %.2f dengan Huruf Mutu A\n\n", collegeStudentName, finalScore);
    } else if (finalScore > 100.00) {
        printf("\nMustahil memiliki nilai %.2f\n", finalScore);
    } else {
        printf("\nMengulang dari SD !!!!\n");
    }

    return 0;
}