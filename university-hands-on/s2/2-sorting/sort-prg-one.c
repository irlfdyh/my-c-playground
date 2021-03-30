#include <stdio.h>

// Function declaration.
void get_usr_rqd();
void get_cln_num();
void prt_rslt();
int get_srt_opt();
void srt_dsc();
void srt_asc();

// Global variable
int rqdt, cln[20];

int main() {
    get_usr_rqd();
    get_cln_num();
    switch (get_srt_opt()) {
        case 0 : srt_dsc(); 
            break;
        case 1 : srt_asc(); 
            break;
        default : printf("Exception here");
            break;
    }
    prt_rslt();
    return 0;
}

void get_usr_rqd() {
    do {
        printf("\nMasukkan jumlah data yang akan di urutkan (maksimal 20) : ");
        scanf("%d", &rqdt); fflush(stdin);
    } while (rqdt > 20);
}

void get_cln_num() {
    int i;
    printf("\nMasukkan angka sebanyak %d\n", rqdt);
    for (i = 0; i < rqdt; i++) {
        printf("%d. ", i+1);
        scanf("%d", &cln[i]);
        fflush(stdin);
    }
}

int get_srt_opt() {
    int srt;
    puts("\nOpsi pengurutan :");
    puts("0 [Descending]");
    puts("1 [Ascending]");
    printf("Pilihan : ");
    scanf("%d", &srt); fflush(stdin);
    if (srt > 1 || srt < 0) {
        get_srt_opt();
    } else {
        return srt;
    }
}

void srt_dsc() {
    int cntr, chl_cntr, swp;
    puts("\ndescending sort");    
    for (cntr = 0; cntr < rqdt - 1; cntr++) {
        for (chl_cntr = 0; chl_cntr < rqdt - 1; chl_cntr++) {
            if (cln[chl_cntr] < cln[chl_cntr + 1]) {
                swp = cln[chl_cntr];
                cln[chl_cntr] = cln[chl_cntr + 1];
                cln[chl_cntr + 1] = swp;
            }
        }
    }
}

void srt_asc() {
    int cntr, chl_cntr, swp;
    puts("\nascending sort");
    for (cntr = 0; cntr < rqdt - 1; cntr++) {
        for (chl_cntr = 0; chl_cntr < rqdt - 1; chl_cntr++) {
            if (cln[chl_cntr] > cln[chl_cntr + 1]) {
                swp = cln[chl_cntr];
                cln[chl_cntr] = cln[chl_cntr + 1];
                cln[chl_cntr + 1] = swp;
            }
        }
    }
}

void prt_rslt() {
    int i;
    puts("\nData yang telah di urutkan");
    for (i = 0; i < rqdt; i++) {
        printf("%d. %d\n", i+1, cln[i]);
    }
}