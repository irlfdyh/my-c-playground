#include <stdio.h>

void pnt_crn_elmns(int arr[], int elmns);

void main() {

    int elmns, cntr, chl_cntr, swp_val;

    puts("Mencari bilangan terkecil\n");
    
    printf("\nMasukkan ukuran atau total elemen : ");
    scanf("%d", &elmns); fflush(stdin);

    int arr[elmns-1];

    // Get element
    puts("\nMasukkan bilangan");
    for (cntr = 0; cntr < elmns; cntr++) {
        scanf("%d", &arr[cntr]);
    }
    
    // Sort element
    puts("\nProcessing...\n");
    for (cntr = 0; cntr < elmns - 1; cntr++) {
        for (chl_cntr = 0; chl_cntr < elmns - cntr - 1; chl_cntr++) {
            printf("chl cntr val    %d\n", chl_cntr);
            if (arr[chl_cntr] > arr[chl_cntr+1]) {
                swp_val = arr[chl_cntr];
                arr[chl_cntr] = arr[chl_cntr+1];
                arr[chl_cntr+1] = swp_val;
            }
            pnt_crn_elmns(arr, elmns);
        }
    }

    // Print element
    puts("\nbilangan yang telah di sortir");
    for (cntr = 0; cntr < elmns; cntr++) {
        printf("%d\n", arr[cntr]);
    }

}

void pnt_crn_elmns(int arr[], int elmns) {
    int lcl_cntr;

    for (lcl_cntr = 0; lcl_cntr < elmns; lcl_cntr++) {
        printf("%d\n", arr[lcl_cntr]);
    }

}