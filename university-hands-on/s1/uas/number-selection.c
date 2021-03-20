//
// Created by irshalfir on 08/02/21.
//

#include <stdio.h>

void ask_user_input();
void print_row_number(int a, int b);
int get_odd_total(int a, int b);
int get_even_total(int a, int b);

int main() {
    ask_user_input();
}

void ask_user_input() {

    int a, b, odd_count, even_count;

    do {

        puts("Masukkan bilangan pertama dan kedua");

        printf("Bilangan a: ");
        scanf("%d", &a); fflush(stdin);

        printf("Bilangan b: ");
        scanf("%d", &b); fflush(stdin);

    } while ((a < 0 || b < 0) || a > b);

    even_count = get_even_total(a, b);
    odd_count = get_odd_total(a, b);

    printf("\nDERET BILANGAN TERSEBUT ADALAH ");
    print_row_number(a, b);

    printf("\nJUMLAH SELURUH BILANGAN GENAP DARI %d SAMPAI %d ADALAH %d", a, b, even_count);
    printf("\nJUMLAH SELURUH BILANGAN GANJIL DARI %d SAMPAI %d ADALAH %d", a, b, odd_count);

}

void print_row_number(int a, int b) {

    printf("%d ", a);

    if (a == b) {
        return;
    } else {
        return print_row_number(++a, b);
    }

}

int get_odd_total(int a, int b) {

    static int odd_value_holder;

    if (a <= b) {
        if (a % 2 == 1) {
            odd_value_holder += a;
        }
        get_odd_total(++a, b);
    } else {
        return odd_value_holder;
    }

}

int get_even_total(int a, int b) {

    static int even_value_holder;

    if (a <= b) {
        if (a % 2 == 0) {
            even_value_holder += a;
        }
        get_even_total(++a, b);
    } else {
        return even_value_holder;
    }

}