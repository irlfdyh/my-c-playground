//
// Created by irshalfir on 26/01/21.
//

#include <stdio.h>
#include <ctype.h>

int main() {

    char hrf;

    printf(“Masukan sebuah huruf  = ”); scanf(“%c”,&hrf);

    if (toupper(hrf) == 'A') {
        printf(“%c adalah huruf Vokal”);
    } else if (toupper(hrf) == 'I') {
        printf(“%c adalah huruf Vokal”);
    } else if (toupper(hrf) == 'U') {
        printf(“%c adalah huruf Vokal”);
    } else if (toupper(hrf) == 'E') {
        printf(“%c adalah huruf Vokal”);
    } else if (toupper(hrf) == 'O') {
        printf(“%c adalah huruf Vokal”);
    } else {
        printf(“%c bukan huruf Vokal”,hrf);
    }

    return 0;
}