/**
* Queue Sample from my lecture.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 2

typedef struct
{
    int data[MAX];
    int head;
    int tail;
} queue;

queue antrian;

void create();
int is_empty();
int is_full();
void enqueue(int data);
int dequeue();
void clear();

int main()
{
    int pilih, angka;
    char jawab;

    create();

    do
    {
        puts("Pilih Menu");
        puts("1. Buat Antrian");
        puts("2. Tampilkan Antrian");
        puts("3. Kosongkan Antrian");
        puts("4. Keluar");
        printf("Pilih 1/2/3/4 = ");
        scanf("%d", &pilih);
        fflush(stdin);

        switch (pilih)
        {
            case 1 :
                do
                {
                    printf("masukkan bilangan = "); 
                    scanf("%d", &angka);
                    fflush(stdin);
                    enqueue(angka);
                    if (is_full() == 1)
                    {
                        puts("Antrian sudah penuh...!");
                        jawab == 'T';
                    }
                    else
                    {
                        printf("Ada bilangan lagi?");
                        scanf("%c", &jawab);
                        fflush(stdin);
                        printf("\n");
                    }
                } while (toupper(jawab) == 'Y');
                break;
            case 2 :
                if (is_empty() == 1)
                {
                    puts("Antrian masih kosong...!\n");
                }
                while (is_empty() == 0)
                {
                    printf("%d sudah dikeluarkan. \n", dequeue());
                    if (is_empty() == 1)
                        printf("Sekarang antrian sudah kosong...!\n");
                }
                break;
            case 3 : clear(); break;
            case 4 : exit(0);
        }
    } while ((pilih == 1) || (pilih == 2) || (pilih == 3));

    return 0;
}

void create()
{
    antrian.head = antrian.tail = -1;
}

int is_empty()
{
    if (antrian.tail == -1)
        return 1;
    else 
        return 0;
}

int is_full()
{
    if (antrian.tail == MAX-1)
        return 1;
    else 
        return 0;
}

void enqueue(int data)
{
    if (is_empty() == 1)
    {
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail] = data;
        printf("%d masuk !\n", antrian.data[antrian.tail]);
    }
    else if (is_full() == 0)
    {
        antrian.tail++;
        antrian.data[antrian.tail] = data;
        printf("%d masuk !\n", antrian.data[antrian.tail]);
    }
}

int dequeue()
{
    int i;
    int e = antrian.data[antrian.head];
    for (i = antrian.head; i <= antrian.tail - 1; i++)
    {
        antrian.data[i] = antrian.data[i+1];
    }
    antrian.tail--;
    return e;
}

void clear()
{
    antrian.head = antrian.tail = -1;
    printf("Antrian sudah dikosongkan!\n");
}