#include <stdio.h>

void swp_vl(int *lpst, int *rpst);

void main() {

    int elmnt, cntr, chl_cntr;

    printf("\nMasukkan ukuran atau total elemen : ");
    scanf("%d", &elmnt); fflush(stdin);

    int arr[elmnt-1];

    // Get element
    puts("\nMasukkan bilangan");
    for (cntr = 0; cntr < elmnt; cntr++) {
        scanf("%d", &arr[cntr]);
    }


    // Sort element
    for (cntr = 0; cntr < elmnt - 1; cntr++) {
        for (chl_cntr = 0; chl_cntr < elmnt - cntr - 1; chl_cntr++) {
            if (arr[chl_cntr] < arr[chl_cntr+1]) {
                swp_vl(&arr[chl_cntr], &arr[chl_cntr+1]);
            }
        }
    }

    // Print element
    puts("\nbilangan yang telah di sortir");
    for (cntr = 0; cntr < elmnt; cntr++) {
        printf("%d\n", arr[cntr]);
    }

}

void swp_vl(int *lpst, int *rpst) {

    int tmp = *lpst;
    *lpst = *rpst;
    *rpst = tmp;

}