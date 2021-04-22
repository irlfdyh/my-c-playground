#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SR 1
#define BLOCK_NUM 1

void insert_file_content();
void show_file_content();
void update_file_content();
void search_file_content();
void file_menu();
FILE *setup_file(char operation[]);

struct student_data
{
    char nim[3], name[20];
    int final_score;
} mhs;

FILE *fl;
int record_number, read_result;
long int offset_byte;

int main()
{
    file_menu();
    return 0;
}

FILE *setup_file(char operation[])
{
    fl = fopen("fls/DATAMHS.DAT", operation);
}

void file_menu()
{
    char answer;
    int choice;

    do 
    {
        puts("PILIH MENU FILE");
        puts("---------------");
        puts("1. Buat File");
        puts("2. Tampilkan isi File");
        puts("3. Edit isi file");
        puts("4. Cari isi file");
        puts("5. EXIT");
        printf("PILIH [1..5] = ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1 : 
            {
                if (setup_file("a") == NULL)
                {
                    puts("File tidak dapat diciptakan!");
                    exit(1);
                }
                insert_file_content();
                break;
            }
            case 2 :
            {
                if (setup_file("rb") == NULL)
                {
                    puts("File tidak dapat dibuka!");
                    exit(1);
                }
                show_file_content();
                break;
            }
            case 3 : 
            {
                if (setup_file("rb+") == NULL)
                {
                    puts("File tidak dapat dibuka!");
                    exit(1);
                }
                update_file_content();
                break;
            }
            case 4 : 
            {
                if (setup_file("rb") == NULL)
                {
                    puts("File tidak dapat dibuka!");
                    exit(1);
                }
                search_file_content();
                break;
            }
            case 5 : 
            {
                puts("Keluar...");
                exit(1);
                break;
            }
            default :
            {
                puts("Unknown Option");
            }
        }

    } while (choice > 5);
}

void insert_file_content()
{
    char reply;

    printf("Nomor Induk Mahasiswa   = "); 
    scanf("%s", mhs.nim); fflush(stdin);
    printf("Nama Mahasiswa          = "); 
    scanf("%s", mhs.name); fflush(stdin);
    printf("Nilai Akhir             = "); 
    scanf("%d", &mhs.final_score); fflush(stdin);

    fwrite(&mhs, sizeof(mhs), 1, fl);

    printf("Ingin menginput data lagi? (Y/N) = ");
    scanf(" %c", &reply);
    if (reply == 'Y' || reply == 'y')
    {
        insert_file_content();
    }
    else
    {
        fclose(fl);
    }
}

void show_file_content()
{
    while (fread(&mhs, sizeof(mhs), BLOCK_NUM, fl) == BLOCK_NUM)
    {
        printf("%-3s %-20s %2d\n", mhs.nim, mhs.name, mhs.final_score);
    }
    fclose(fl);
}

void update_file_content()
{
    char reply;

    do
    {
        printf("Nomor record dari data yang ingin anda ubah = ");
        scanf("%d", &record_number);

        offset_byte = (record_number - 1) * sizeof(mhs);
        fseek(fl, offset_byte, SEEK_SET);

        read_result = fread(&mhs, sizeof(mhs), SR, fl);
        if (read_result == 0)
        {
            puts("Nomor record tidak ditemukan");
        }
        else 
        {
            printf("Nomor Induk Mahasiswa   = %-s\n", mhs.nim);
            printf("Nama Mahasiswa          = %-s\n", mhs.name);
            printf("Nilai Akhir             = %d\n", mhs.final_score);

            printf("\nNilai akhir kini      = ");
            scanf("%d", &mhs.final_score);

            fseek(fl, offset_byte, SEEK_SET);
            fwrite(&mhs, sizeof(mhs), SR, fl);
        }

        printf("\nIngin mengubah data lagi? (Y/T) ");
        scanf(" %c", &reply);
    } while (reply == 'Y' || reply == 'y');

    fclose(fl);

}

void search_file_content()
{
    char reply;

    do
    {
        printf("Nomor record dari data yang ingin dicari = ");
        scanf("%d", &record_number);

        offset_byte = (record_number - 1) * sizeof(mhs);
        fseek(fl, offset_byte, SEEK_SET);

        read_result = fread(&mhs, sizeof(mhs), SR, fl);
        if (read_result == 0)
        {
            puts("Nomor record tidak ditemukan");
        }
        else 
        {
            printf("Nomor Induk Mahasiswa   = %-s\n", mhs.nim);
            printf("Nama Mahasiswa          = %-s\n", mhs.name);
            printf("Nilai Akhir             = %d\n", mhs.final_score);
        }

        printf("\nIngin mencari data lagi? (Y/T) ");
        scanf(" %c", &reply);
    } while (reply == 'Y' || reply == 'y');

    fclose(fl);   
}