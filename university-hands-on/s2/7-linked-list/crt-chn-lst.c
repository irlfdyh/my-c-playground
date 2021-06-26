#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define PANJANG_NOMOR 5
#define PANJANG_NAMA 20

struct simpul_siswa
{
    char nomor[PANJANG_NOMOR+1];
    char nama[PANJANG_NAMA+1];
    struct simpul_siswa *lanjutan;
};

struct simpul_siswa *ptr_kepala = NULL;
void pemasukan_data();
void masukan_string(char *keterangan, char *masukan, int panjang_maks);
void tampilkan_data(void);
void cari_data(char *nama);
void hapus_data(char *nomor);

int main()
{
    char nama[10], nomor[10];

    puts("MENAMBAH DATA KE DALAM LINKED LIST");

    pemasukan_data();
    tampilkan_data();

    printf("\nMENCARI DATA DALAM LINKED LIST\nNama siswa yang dicari = ");
    scanf("%s", nama); cari_data(nama);
    printf("\n\nMENGHAPUS SEBUAH DATA DALAM LINKED LIST\nNomor siswa yang dihapus = ");
    scanf("%s", nomor); hapus_data(nomor);
    tampilkan_data();

    return 0;
}

void pemasukan_data()
{
    char jawaban;
    struct simpul_siswa *ptr_baru;

    do
    {
        ptr_baru = (struct simpul_siswa *)malloc(sizeof(struct simpul_siswa));

        if (ptr_baru)
        {
            masukan_string("Nomor Siswa : ", ptr_baru->nomor, PANJANG_NOMOR);
            masukan_string("Nama Siswa  : ", ptr_baru->nama, PANJANG_NAMA);

            ptr_baru->lanjutan = ptr_kepala;
            ptr_kepala = ptr_baru;

            printf("Memasukan data lagi? (Y/T) = ");

            do
            {
                scanf(" %c", &jawaban); fflush(stdin);
            } while (!(jawaban == 'Y' || jawaban == 'T'));
        }
        else 
        {
            puts("Memori tidak cukup...!");
            break;
        }
    } while (jawaban == 'Y');
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

void tampilkan_data()
{
    struct simpul_siswa *ptr_sementara;
    puts("\nMENAMPILKAN ISI LINKED LIST");
    ptr_sementara = ptr_kepala;
    while (ptr_sementara)
    {
        printf("%s %s\n", ptr_sementara->nomor, ptr_sementara->nama);
        ptr_sementara = ptr_sementara->lanjutan;
    }
}

void cari_data(char *nama)
{
    struct simpul_siswa *ptr_pos_data;
    struct simpul_siswa *ptr_pendahulu;

    ptr_pendahulu = NULL;
    ptr_pos_data = ptr_kepala;

    while (ptr_pos_data)
    {
        if (strcmp(nama, ptr_pos_data->nama) != 0)
        {
            ptr_pendahulu = ptr_pos_data;
            ptr_pos_data = ptr_pos_data->lanjutan;
        }
        else
        {
            printf("\nSiswa atas nama %s dengan nomor siswa %s ditemukan...!", nama, ptr_pos_data->nomor);
            break;
        }
    }
}

void hapus_data(char *nomor)
{
    struct simpul_siswa *ptr_pos_data;
    struct simpul_siswa *ptr_pendahulu;

    ptr_pendahulu = NULL;
    ptr_pos_data = ptr_kepala;

    while (ptr_pos_data)
    {
        if (strcmp(nomor, ptr_pos_data->nomor) != 0)
        {
            ptr_pendahulu = ptr_pos_data;
            ptr_pos_data = ptr_pos_data->lanjutan;
        }
        else
        {
            if (ptr_pendahulu == NULL)
            {
                ptr_kepala = ptr_kepala->lanjutan;
                free(ptr_pos_data);
            }
            else 
            {
                ptr_pendahulu->lanjutan = ptr_pos_data->lanjutan;
                // printf("\nSiswa dengan nomor &s atas nama %s telah dihapus dari LINKED LIST...!", nomor, ptr_pos_data->nama);
                free(ptr_pos_data);
            }
            break;
        }
    }
}