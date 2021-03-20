#include <stdio.h>

int show_option();
void triangle();
void rectangle();
void circle();

int main() {

    int user_choice;

    do {
        user_choice = show_option();
    } while(user_choice > 3);

    switch (user_choice) {
        case 1: triangle();
        case 2: rectangle();
        case 3: circle();
        default: { /* this will be ignored */ }
    }

}

int show_option() {

    int selected_num;

    puts("MENGHITUNG LUAS BIDANG GEOMETRI");
    puts("1. SEGITIGA");
    puts("2. PERSEGI PANJANG");
    puts("3. LINGKARAN");
    printf("\nPILIH [1/2/3] : ");
    scanf("%d", &selected_num);

    return selected_num;

}

void triangle() {

    float triangle_base_length, triangle_height, triangle_large;

    printf("Masukkan alas segitiga      : ");
    scanf("%f", &triangle_base_length); fflush(stdin);
    printf("Masukkan tinggi segitiga    : ");
    scanf("%f", &triangle_height); fflush(stdin);

    triangle_large = (0.5f * (triangle_base_length * triangle_height));

    printf("Luas segitiga = %.2f", triangle_large);

}

void rectangle() {

    int p, l, result;

    printf("Masukkan panjang persegi    : ");
    scanf("%d", &p); fflush(stdin);
    printf("Masukkan lebar persegi      : ");
    scanf("%d", &l); fflush(stdin);

    result = p * l;

    printf("Luas Persegi Panjang        = %d", result);

}

void circle() {

    float r, result;

    printf("Masukkan jari jari lingkaran    : ");
    scanf("%f", &r); fflush(stdin);

    result = 3.14f * r * r;

    printf("Luas lingkaran      : %.2f", result);

}