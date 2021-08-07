/**
* University final exam.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define NAME_LENGTH 50
#define NIM_LENGTH 8

struct student_node
{
    char name[NAME_LENGTH], nim[NIM_LENGTH], ql;
    float ex_scr;
    struct student_node *next_node;
};

typedef struct student_node s_node;

struct student_node *head_ptr = NULL;

void operation_menu();
void operation_determiner();
void operation_processor(int code);

void add_data();
void show_all_data();
void search_by_name();
void search_by_nim_and_update();
void show_highest_score();

char get_ql(float fs);
void string_input(char message[], char *obj);
void float_input(char message[], float *obj);
void print_single_data(s_node *data);

int main()
{
    operation_menu();
    return 0;
}

// Operation Flow

void operation_menu() 
{
    puts("");
    puts("Pilih operasi yang akan dilakukan :");
    puts("1. Input data nilai");
    puts("2. Menampilkan seluruh data nilai");
    puts("3. Mencari data nilai mahasiswa berdasarkan nama");
    puts("4. Mencari data nilai mahasiswa berdasarkan nim dan ubah");
    puts("5. Mencari nilai ujian tertinggi");
    puts("6. Keluar");
    puts("");
    operation_determiner();
}

void operation_determiner()
{
    short int opt;
    printf("Pilihan: "); 
    scanf("%hd", &opt);
    puts("");
    operation_processor(opt);
}

void operation_processor(int code)
{
    switch(code) 
    {
        case 1 : 
        {
            add_data();
            break;
        }
        case 2 : 
        {
            show_all_data();
            break;
        }
        case 3 : 
        {
            search_by_name();
            break;
        }
        case 4 : 
        {
            search_by_nim_and_update();
            break;
        }
        case 5 : 
        {
            show_highest_score();
            break;
        }
        case 6 : 
        {
            puts("Keluar.");
            exit(1);
            break;
        }
        default : 
        {
            puts("Pilihan tidak valid!!");
            puts("Ulangi pemasukan\n");
            operation_determiner();
            break;
        }
    }
    operation_menu();
}

void add_data()
{
    chc_h_scr = chc_ptr;
    char answer;
    struct student_node *new_data;

    puts("Menambahkan data baru");

    do
    {
         new_data = (struct student_node *)malloc(sizeof(struct student_node));

        if (new_data)
        {
            string_input("\nNama           : ", new_data->name);
            string_input("NIM            : ", new_data->nim);
            float_input("Nilai Ujian      : ", &new_data->ex_scr);
            new_data->ql = get_ql(new_data->ex_scr);

            new_data->next_node = head_ptr;
            head_ptr = new_data;
        }
        else
        {
            puts("Memori tidak cukup..!");
            break;
        }

        printf("Masukkan data lagi? (Y/T) = ");
        scanf(" %c", &answer);
    } while (toupper(answer) == 'Y');

}

void show_all_data()
{
    struct student_node *chc_ptr;
    chc_ptr = head_ptr;

     puts("\n--------------------------------------\n");

    while(chc_ptr)
    {
        print_single_data(chc_ptr);
        chc_ptr = chc_ptr->next_node;
    }

    puts("--------------------------------------\n");
}

void search_by_name()
{
    char query[NAME_LENGTH+1];

    struct student_node *chc_ptr;
    struct student_node *prv_chc_ptr;

    prv_chc_ptr = NULL;
    chc_ptr = head_ptr;

    string_input("Masukkan nama yang dicari   : ", query);

    while (chc_ptr)
    {
        if (strcmp(query, chc_ptr->name) == 0)
        {
            print_single_data(chc_ptr);
            break;
        }
        else
        {
            prv_chc_ptr = chc_ptr;
            chc_ptr = chc_ptr->next_node;
        }
    }
}

void search_by_nim_and_update()
{
    char query[NAME_LENGTH+1];

    struct student_node *chc_ptr;
    struct student_node *prv_chc_ptr;

    prv_chc_ptr = NULL;
    chc_ptr = head_ptr;

    string_input("Masukkan nim yang dicari   : ", query);

    while (chc_ptr)
    {
        if (strcmp(query, chc_ptr->nim) == 0)
        {
            print_single_data(chc_ptr);
            float_input("Nilai Ujian      : ", &chc_ptr->ex_scr);
            chc_ptr->ql = get_ql(chc_ptr->ex_scr);
            printf("\nData telah diperbaharui\n");
            break;
        }
        else
        {
            prv_chc_ptr = chc_ptr;
            chc_ptr = chc_ptr->next_node;
        }
    }
}

void show_highest_score()
{
    struct student_node *chc_ptr;
    chc_ptr = head_ptr;

    float chc_scr = 0;
    struct student_node *chc_h_scr;

    if (chc_ptr != NULL)
    {

        while(chc_ptr)
        {
            if (chc_scr < chc_ptr->ex_scr)
            {
                chc_scr = chc_ptr->ex_scr;
                chc_h_scr = chc_ptr;
            }
            chc_ptr = chc_ptr->next_node;
        }
        puts("\n--------------------------------------\n");
        print_single_data(chc_h_scr);
        puts("--------------------------------------\n");
    }
    else 
    {
        puts("Data masih kosong");
    }
}

void string_input(char message[], char *obj)
{
    printf("%s", message);
    scanf("%s", obj);
}

void float_input(char message[], float *obj)
{
    printf("%s", message);
    scanf("%f", obj);
}

char get_ql(float fs)
{
    if (fs >= 75 && fs <= 100)
    {
        return 'A';
	}
	else if (fs >= 65 && fs <= 74.99 )
    {
		return 'B';
	} 
	else if (fs >= 40 && fs<= 64.99) 
    {
		return 'C';
	}
	else if (fs >= 25 && fs <= 39.99)
    {
		return 'D';
	}
	else if (fs >= 0 && fs <= 24.99)
    {
		return 'E';
	}
	else
	{
		return 'Z';
	}
}

void print_single_data(s_node *data)
{
    printf("NIM         : %s\n", data->nim);
    printf("Nama        : %s\n", data->name);
    printf("Nilai Ujian : %.2f\n", data->ex_scr);
    printf("Huruf Mutu  : %c\n", data->ql);
    printf("\n");
}