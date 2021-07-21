#include <stdio.h>
#define max 5

typedef struct {
    int top;
    int data[max];
} stack;

stack stck;

void create_empty();
int is_empty();
int is_full();
void push(int x);
void pop();

int main()
{
    int rty, vl, cho;

    create_empty();
    cho = 0;

    while (cho != 5) {
        puts("-----------------------------");
        puts("Menu Utama");
        puts("-----------------------------");
        puts("1. Cek kondisi stack");
        puts("2. Tambah data (push)");
        puts("3. Keluarkan isi stack (pop)");
        puts("4. Kosongkan stack");
        puts("5. Keluar");
        printf("Pilihan anda : ");
        scanf("%d", &cho);
        switch (cho)
        {
            case 1 :
                if (is_empty() == 1)
                    puts("Stack masih kosong");
                else if ((is_empty() == 0) && (is_full() == 0))
                    puts("Stack sudah terisi (belum penuh)");
                else
                    puts("Stack sudah penuh");
                break;
            case 2 :
                if (is_full() == 1)
                    puts("Stack penuh.");
                else
                    printf("Masukkan data: ");
                    scanf("%d", &vl);
                    push(vl);
                    printf("Top baru: %d\n", stck.data[stck.top]);
                break;
            case 3 : 
                printf("Top yang dikeluarkan bernilai: %d\n", stck.data[stck.top]);
                pop();
                break;
            case 4 :
                while (is_empty() == 0)
                {
                    printf("Top yang dikeluarkan bernilai: %d\n", stck.data[stck.top]);
                    pop();
                }
                puts("Stack sudah kosong");
                break;
            case 5 :
                puts("---Terimakasih---");
                break;
            default :
                cho = 0;
        }
    }
    return 0;
}

void create_empty()
{
    stck.top = 0;
}

void push(int x)
{
    stck.top = stck.top + 1;
    stck.data[stck.top] = x;
}

void pop()
{
    stck.top = stck.top - 1;
}

int is_empty()
{
    if (stck.top == 0)
        return 1;
    else 
        return 0;
}

int is_full()
{
    if (stck.top == max)
        return 1;
    else 
        return 0;
        
}