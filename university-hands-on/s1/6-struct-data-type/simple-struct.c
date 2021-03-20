//
// Created by irshalfir on 30/12/20.
//

#include <stdio.h>

struct college_data {
    char nim[10], name[20];
    int exam_score;
};

//6-struct-data-type college_data default_college = {
//        .nim = "",
//        .name = "",
//        .exam_score = 10
//};

//typedef 6-struct-data-type college_data College;

int main() {

    struct college_data college;

//    printf("print default college value %d", default_college.exam_score);
//    default_college.exam_score = 90;
//    printf("updated value %d", default_college.exam_score);

    printf("Nomor induk mahasiswa   : ");
    scanf("%s", college.nim); fflush(stdin);
    printf("Nama mahasiswa          : ");
    scanf("%s", college.name); fflush(stdin);
    printf("Nilai ujian             : ");
    scanf("%d", &college.exam_score); fflush(stdin);

    if (college.exam_score >= 80) {
        puts("ANDA DINYATAKAN LULUS");
    } else {
        puts("ANDA DINYATAKAN GAGAL");
    }

    return 0;
}