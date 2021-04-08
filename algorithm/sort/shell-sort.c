#include <stdio.h>

void asc_shell_sort(int arr[], int n);
void dsc_shell_sort(int arr[], int n);
void print_array(int arr[], int n);
void print_stat(char pst[], char msg[], int avl);

int main() {

    int arr[] = { 23, 53, 2, 64, 12, 22 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // dsc_shell_sort(arr, n);
    // asc_shell_sort(arr, n);

    print_array(arr, n);

    return 0;
}

void asc_shell_sort(int arr[], int n) {

    int i, j, gap, temp;

    for (gap = n/2; gap > 0; gap /=2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

}

void dsc_shell_sort(int arr[], int n) {

    int i, j, gap, temp;

    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] < temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

}

void print_array(int arr[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}