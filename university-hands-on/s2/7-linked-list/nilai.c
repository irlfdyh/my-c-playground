#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define PANJANG_NAMA 50
#define PANJANG_NIM 15
#define PANJANG_NILAI 5

struct mahasiswa
{
    char nama[PANJANG_NAMA+1];
    char nim[PANJANG_NIM];
    float nilai_quiz, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char huruf_mutu;
    struct mahasiswa *lanjutan;
};

void pemasukan_data();
void masukan_string(char *keterangan, char *masukan, int panjang_maks);

struct simpul_kepala *ptr_kepala = NULL;

int main()
{
    pemasukan_data();
    return 0;
}

void pemasukan_data()
{
    char jawaban;
    struct mahasiswa *ptr_baru;

    ptr_baru = (struct mahasiswa *)malloc(sizeof(struct mahasiswa));

        if (ptr_baru)
        {
            masukan_string("Nama    : ", ptr_baru->nama, PANJANG_NAMA);
            masukan_string("NIM     : ", ptr_baru->nim, PANJANG_NIM);
            printf("Quiz    : "); scanf("%f", &ptr_baru->nilai_quiz);
            printf("Tugas   : "); scanf("%f", &ptr_baru->nilai_tugas);
            printf("UTS     : "); scanf("%f", &ptr_baru->nilai_uts);
            printf("UAS     : "); scanf("%f", &ptr_baru->nilai_uas);

            ptr_baru->lanjutan = ptr_kepala;
            ptr_kepala = ptr_baru;

            ptr_baru->nilai_akhir = 
                            (0.2 * ptr_baru->nilai_tugas) +
                            (0.2 * ptr_baru->nilai_quiz) +
                            (0.3 * ptr_baru->nilai_uts) +
                            (0.3 * ptr_baru->nilai_uas);

            printf("Nilai akhir: %.2f\n", ptr_baru->nilai_akhir);

        }
        else 
        {
            puts("Memori tidak cukup...!");
        }
}

void masukan_string(char *keterangan, char *masukan, int panjang_maks)
{
    char st[256];
    do
    {
        printf(keterangan);
        gets(st);
        if (strlen(st) > panjang_maks)
        {
            printf("Terlalu panjang. Maks %d karakter\n", panjang_maks);
        }
    } while (strlen(st) > panjang_maks);
    strcpy(masukan, st);
}