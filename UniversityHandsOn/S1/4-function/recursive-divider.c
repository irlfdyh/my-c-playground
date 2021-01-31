#include <stdio.h>

void input_number();
int multiplication_result(int first, int second);

int main() {

    input_number();

}

void input_number() {

    int first_number, second_number, is_even, result;

    do {
        printf("Masukkan bilangan pertama   : ");
        scanf("%d", &first_number); fflush(stdin);
        printf("Masukkan bilanga kedua      : ");
        scanf("%d", &second_number); fflush(stdin);

        is_even = first_number % second_number;

        printf("apakah genap? %d\n\n", is_even);

    } while (is_even);

    result = multiplication_result(first_number, second_number);
    printf("hasil : %d", result);

}

int multiplication_result(int first, int second) {

    static int counter;
    int decrement_first;

    decrement_first = first - second;

    if (first == 0) {
        return counter;
    } else {
        counter++;
        return multiplication_result(decrement_first, second);
    }

}



