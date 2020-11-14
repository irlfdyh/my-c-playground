/**
    Buat program untuk menampilkan bilangan prima dari 1 – 100. 
    Bilangan prima adalah bilangan yang hanya habis dibagi bilangan itu sendiri.

    Bilangan prima [    
                        2, 3, 5, 7, 11, 
                        13, 17, 19, 23, 
                        29, 31, 37, 41, 
                        43, 47, 53, 59, 
                        61, 67, 71, 73, 
                        79, 83, 89, 97
                    ]
*/
#include <stdio.h>

int main() {

    int i, count, number;

    for (number = 1; number <= 100; number++) {

        count = 0;
        
        for (i = 2; i <= number/2; i++) {
            if (number % i == 0) {
                count++;
            }
        }

        if (count == 0 && number != 1) {
            printf("%d ", number);
        }

    }

    return 0;
}