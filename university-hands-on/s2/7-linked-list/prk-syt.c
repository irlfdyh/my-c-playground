#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define REG_LENGTH 8
#define CR_PRICE 5000
#define MC_PRICE 2000

// flags
// car flags
#define VEHCL_CR 1
// motorcycle flags
#define VEHCL_MC 2

struct vehicle_node
{
    char reg_number[REG_LENGTH];
    int vehcl_type, incoming_time, outgoing_time, cost;
    struct vehicle_node *next_node;
};
typedef struct vehicle_node vnode;

struct vehicle_node *head_ptr = NULL;

void operation_menu();
void operation_determiner();
void operation_processor(int code);

void incoming_vehicle();
void outgoing_vehicle();
void parking_vehicle();
void finished_parking_vehicle();

void string_input(char msg[], char *obj);
void float_input(char msg[], float *obj);
void int_input(char msg[], int *obj);
int time_input(char msg[]);
void print_single_data(vnode *data);
void print_time(char msg[], int timeSec);

const char* get_vehcl_type(int type);
int computate_cost(int inc_t, int out_t, int type);

// Driver program

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
    puts("1. Mendata kendaraan masuk");
    puts("2. Mendata kendaraan keluar");
    puts("3. Menampilkan data kendaraan yang masih di parkiran");
    puts("4. Menampilkan data kendaraan yang sudah keluar");
    puts("0. Keluar");
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
    switch(code) {
        case 0 : { puts("Keluar."); exit(1); break; }
        case 1 : { incoming_vehicle(); break; }
        case 2 : { outgoing_vehicle(); break; }
        case 3 : { parking_vehicle(); break; }
        case 4 : { finished_parking_vehicle(); break; }
        default : 
        {
            puts("Pilihan tidak valid!!");
            puts("Ulangi pemasukan\n");
            operation_determiner();
            break;
        }
    }
}

void incoming_vehicle()
{
    struct vehicle_node *new_ptr;

    puts("\nMasukkan data kendaraan\n");

    new_ptr = (struct vehicle_node *)malloc(sizeof(struct vehicle_node));

    if (new_ptr)
    {
        string_input("Nomor Kendaraan\t: ", new_ptr->reg_number);
        int_input("Jenis kendaraan\t: ", &new_ptr->vehcl_type);
        new_ptr->incoming_time = time_input("Waktu masuk\t: ");

        new_ptr->next_node = head_ptr;
        head_ptr = new_ptr;
    }
    else
    {
        puts("Memory tidak cukup!!\n\n");
    }

    operation_menu();
}

void outgoing_vehicle()
{
    struct vehicle_node *chc_ptr;
    struct vehicle_node *prv_chc_ptr;

    char query[REG_LENGTH];
    int cntr = 0, ot;

    prv_chc_ptr = NULL;
    chc_ptr = head_ptr;

    string_input("Nomor Kendaraan\t: ", query);

    while(chc_ptr)
    {
        if (strcmp(chc_ptr->reg_number, query) == 0)
        {
            cntr++;
            print_single_data(chc_ptr);
            ot = time_input("Waktu keluar\t: ");
            if (ot > chc_ptr->incoming_time)
            {
                chc_ptr->outgoing_time = ot;
                chc_ptr->cost = computate_cost(
                    chc_ptr->incoming_time, 
                    chc_ptr->outgoing_time,
                    chc_ptr->vehcl_type
                );
            }
            else
            {
                puts("\nWaktu keluar tidak valid!!\n");
            }
            break;
        }
        prv_chc_ptr = chc_ptr;
        chc_ptr = chc_ptr->next_node;
    }

     if (cntr == 0)
    {
        puts("\nData tidak ditemukan!!\n");
    }

    operation_menu();
}

void parking_vehicle()
{
    struct vehicle_node *chc_ptr;
    struct vehicle_node *prv_chc_ptr;

    int cntr = 0;

    prv_chc_ptr = NULL;
    chc_ptr = head_ptr;

    while(chc_ptr)
    {
        if (chc_ptr->outgoing_time == NULL)
        {
            cntr++;
            print_single_data(chc_ptr);
        }
        prv_chc_ptr = chc_ptr;
        chc_ptr = chc_ptr->next_node;
    }

    if (cntr == 0)
    {
        puts("\nData masih kosong!!\n");
    }

    operation_menu();
}

void finished_parking_vehicle()
{
    struct vehicle_node *chc_ptr;
    struct vehicle_node *prv_chc_ptr;

    int cntr = 0;

    prv_chc_ptr = NULL;
    chc_ptr = head_ptr;

    while(chc_ptr)
    {
        if (chc_ptr->outgoing_time != NULL)
        {
            cntr++;
            print_single_data(chc_ptr);
        }
        prv_chc_ptr = chc_ptr;
        chc_ptr = chc_ptr->next_node;
    }

    if (cntr == 0)
    {
        puts("\nData masih kosong!!\n");
    }

    operation_menu();
}

// Helper function

void string_input(char msg[], char *obj)
{
    printf("%s", msg);
    scanf("%s", obj);
}

void float_input(char msg[], float *obj)
{
    printf("%s", msg);
    scanf("%f", obj);
}

void int_input(char msg[], int *obj)
{
    printf("%s", msg);
    scanf("%d", obj);
}

int time_input(char msg[])
{
    int hour, minute, second;

    printf("%s\n", msg);
    printf("Jam = ");
    scanf("%d", &hour);
    printf("Menit = ");
    scanf("%d", &minute);
    printf("Detik = ");
    scanf("%d", &second);
    return ((hour*60)*60) + (minute*60) + second;
}

void print_time(char msg[], int timeSec)
{
    int hour, minute, second;

    hour = (timeSec/60)/60;
    minute = ((timeSec - ((hour*60)*60))/60);
    second = timeSec - (((hour*60)*60) + (minute*60));

    printf("%s\n", msg);
    printf("Jam\t= %d\n", hour);
    printf("Menit\t= %d\n", minute);
    printf("Detik\t= %d\n", second);
}

void print_single_data(vnode *data)
{
    printf("Nomor Kendaraan\t: %s\n", data->reg_number);
    printf("Tipe Kendaraan\t: %s\n", get_vehcl_type(data->vehcl_type));
    print_time("\nWaktu Masuk\t:", data->incoming_time);
    if (data->outgoing_time != NULL)
    {
        print_time("\nWaktu Keluar\t:", data->outgoing_time);
        printf("\nBiaya\t: %d", data->cost);
    }
    puts("\n");
}

const char* get_vehcl_type(int type)
{
    if (type == VEHCL_CR)
    {
        return "Mobil";
    }
    else if (type == VEHCL_MC)
    {
        return "Motor";
    }
}

int computate_cost(int inc_t, int out_t, int type)
{
    int time, hour, minute, second, cost;

    time = out_t-inc_t;

    hour = (time/60)/60;
    minute = ((time - ((hour*60)*60))/60);
    second = time - (((hour*60)*60) + (minute*60));

    if (type == VEHCL_CR)
    {
        cost = hour*CR_PRICE;
        if (minute > 0)
        {
            cost += CR_PRICE;
        }
    }
    else if (type == VEHCL_MC)
    {
        cost = hour*MC_PRICE;
        if (minute > 0)
        {
            cost += MC_PRICE;
        }
    }

    return cost;
}