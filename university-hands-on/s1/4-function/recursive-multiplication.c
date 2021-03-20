#include <stdio.h>

void input_number();
int multiplication_result(int first, int second);

int main() {
    input_number();
}

void input_number() {

    int first_number, second_number, result;

    printf("Masukkan bilangan pertama   : ");
    scanf("%d", &first_number); fflush(stdin);
    printf("Masukkan bilanga kedua      : ");
    scanf("%d", &second_number); fflush(stdin);

    result = multiplication_result(first_number, second_number);
    printf("hasil : %d", result);

}

int multiplication_result(int first, int second) {

    static int result_holder;

    result_holder += first;
    second--;

    if (second == 0) {
        return result_holder;
    } else {
        return multiplication_result(first, second);
    }

}