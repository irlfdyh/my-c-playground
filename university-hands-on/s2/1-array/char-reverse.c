#include <stdio.h>

void rvre_arr(char wrd[], int st_pst, int ed_pst);

void main() {

    int cntr, elmnt;

    printf("Masukkan jumlah huruf dari kata yang ingin di balik : ");
    scanf("%d", &elmnt);

    char rl_wrd[elmnt];
    
    do {

        printf("Masukkan kata yang ingin di balik : ");
        scanf("%s", &rl_wrd);

    } while (sizeof(rl_wrd) > elmnt);

    puts("\n\n");
    puts("memproses...");

    rvre_arr(rl_wrd, 0, elmnt-1);

    puts("\n\n");
    printf("Nama setelah dibalik: %s\n", rl_wrd);

}

void rvre_arr(char wrd[], int st_pst, int ed_pst) {
    while (st_pst < ed_pst) {
        char swp_tmp = wrd[st_pst];
        wrd[st_pst] = wrd[ed_pst];
        wrd[ed_pst] = swp_tmp;
        st_pst++;
        ed_pst--;
    }
}