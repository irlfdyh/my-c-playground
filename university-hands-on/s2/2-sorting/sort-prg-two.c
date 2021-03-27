#include <stdio.h>

// Function declaration.
void get_usr_rqd();
void get_cln_num();
void prt_rslt();
int get_srt_algr();
int get_srt_opt();
void bbl_srt(int typ);
void slc_srt(int typ);

// Global variable
int rqdt, cln[20];

int main() {
    get_usr_rqd();
    get_cln_num();

    switch (get_srt_algr()) {
        case 0  : bbl_srt(get_srt_opt()); break;
        case 1  : slc_srt(get_srt_opt()); break;
        default : printf("Exception here"); break;
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

int get_srt_algr() {

    int algr;

    puts("\nOpsi algoritma :");
    puts("0 [Bubble Sort]");
    puts("1 [Selection Sort]");
    printf("Pilihan : ");
    scanf("%d", &algr); fflush(stdin);

    if (algr > 1 || algr < 0) {
        get_srt_algr();
    } else {
        return algr;
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

void bbl_srt(int typ) {

    int cntr, chl_cntr, swp;

    if (typ == 0) {
        puts("\nmemproses bubble sort descending...");
        for (cntr = 0; cntr < rqdt - 1; cntr++) {
            for (chl_cntr = 0; chl_cntr < rqdt - 1; chl_cntr++) {
                if (cln[chl_cntr] < cln[chl_cntr + 1]) {
                    swp = cln[chl_cntr];
                    cln[chl_cntr] = cln[chl_cntr + 1];
                    cln[chl_cntr + 1] = swp;
                }
            }
        }
    } else if (typ == 1) {
        puts("\nmemproses bubble sort ascending...");
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

}

void slc_srt(int typ) {

    int cntr, chl_cntr, swp;

    if (typ == 0) {
        puts("\nmemproses selection sort descending...");
        for (cntr = 0; cntr < rqdt - 1; cntr++) {
            for (chl_cntr = cntr + 1; chl_cntr < rqdt; chl_cntr++) {
                if (cln[cntr] < cln[chl_cntr]) {
                    swp = cln[cntr];
                    cln[cntr] = cln[chl_cntr];
                    cln[chl_cntr] = swp;
                }
            }
        }
    } else if (typ == 1) {
        puts("\nmemproses selection sort ascending...");
        for (cntr = 0; cntr < rqdt - 1; cntr++) {
            for (chl_cntr = cntr + 1; chl_cntr < rqdt; chl_cntr++) {
                if (cln[cntr] > cln[chl_cntr]) {
                    swp = cln[cntr];
                    cln[cntr] = cln[chl_cntr];
                    cln[chl_cntr] = swp;
                }
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