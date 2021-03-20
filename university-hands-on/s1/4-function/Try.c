/**
 * Membuat program perkalian mengguanakan perulangan
 */

#include <stdio.h>

/**
 * ------------------ Definisi Fungsi ---------------------
 */

// wajib
void menjalankan_program(void);

// opsi 1
int menghitung_perkalian_statis(int a, int b);

// opsi 2
int menghitung_perkalian_global(int a, int b);

// opsi 3
void menghitung_perkalian_dua_arah(int a, int b, int *hasil);

/**
 * ------------------ Fungsi Utama ----------------------
 */
int main() {
    menjalankan_program();
}

/**
 * ------------------ Mengambil Input ----------------------
 */

// Opsi 1
void menjalankan_program() {

    int angka_pertama, angka_kedua, hasil;

    puts("PROGRAM PERKALIAN MENGGUNAKAN FUNGSI REKURSIF");

    printf("Masukkan angka pertama  : ");
    scanf("%d", &angka_pertama); fflush(stdin);

    printf("Masukkan angka kedua    : ");
    scanf("%d", &angka_kedua); fflush(stdin);

    hasil = menghitung_perkalian_statis(angka_pertama, angka_kedua);

    printf("Hasilnya                : %d", hasil);

}

// Opsi 2
void menjalankan_program() {

    int angka_pertama, angka_kedua, hasil;

    puts("PROGRAM PERKALIAN MENGGUNAKAN FUNGSI REKURSIF");

    printf("Masukkan angka pertama  : ");
    scanf("%d", &angka_pertama); fflush(stdin);

    printf("Masukkan angka kedua    : ");
    scanf("%d", &angka_kedua); fflush(stdin);

    hasil = menghitung_perkalian_global(angka_pertama, angka_kedua);

    printf("Hasilnya                : %d", hasil);

}

// Opsi 3
void menjalankan_program() {

    int angka_pertama, angka_kedua, hasil;

    puts("PROGRAM PERKALIAN MENGGUNAKAN FUNGSI REKURSIF");

    printf("Masukkan angka pertama  : ");
    scanf("%d", &angka_pertama); fflush(stdin);

    printf("Masukkan angka kedua    : ");
    scanf("%d", &angka_kedua); fflush(stdin);

    menghitung_perkalian_dua_arah(angka_pertama, angka_kedua, &hasil);

    printf("Hasilnya                : %d", hasil);

}

/**
 * ------------------ Deklarasi Fungsi ---------------------
 */

// Opsi 1
int menghitung_perkalian_statis(int a, int b) {

    static int hasil;
    hasil += a;
    b--;

    if (b == 0) {
        return hasil;
    } else {
        return menghitung_perkalian_statis(a, b);
    }

}


// Opsi 2
int hasil_akhir = 0;
int menghitung_perkalian_global(int a, int b) {

    hasil_akhir += a;
    b--;

    if (b == 0) {
        return hasil_akhir;
    } else {
        return menghitung_perkalian_global(a, b);
    }

}

// Opsi 3
void menghitung_perkalian_dua_arah(int a, int b, int *hasil) {

    *hasil += a;
    b--;

    if (b == 0) {
        return;
    } else {
        menghitung_perkalian_dua_arah(a, b, hasil);
    }

}