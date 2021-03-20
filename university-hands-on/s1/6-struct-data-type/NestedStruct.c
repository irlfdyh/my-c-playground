//
// Created by irshalfir on 30/12/20.
//

#include <stdio.h>

struct birth_date {
    int date, month, year;
};

struct employee_data {
    char name[20], address[50];
    struct birth_date birth;
} employee;

int main() {

    printf("Nama Karyawan   = ");
    scanf("%s", employee.name); fflush(stdin);

    printf("Alamat          = ");
    scanf("%s", employee.address); fflush(stdin);

    printf("Tanggal Lahir   = ");
    scanf("%d", &employee.birth.date);
    fflush(stdin);
    printf("Bulan Lahir     = ");
    scanf("%d", &employee.birth.month);
    fflush(stdin);
    printf("Tahun Lahir     = ");
    scanf("%d", &employee.birth.year);
    fflush(stdin);

    return 0;
}