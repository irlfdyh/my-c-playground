#include <stdio.h>

void asc_insertion_sort(int arr[], int n);
void dsc_insertion_sort(int arr[], int n);
void print_array(int arr[], int n);

int main() {

    int arr[] = { 23, 53, 2, 64, 12, 22 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // asc_insertion_sort(arr, n);
    // dsc_insertion_sort(arr, n);

    print_array(arr, n);

    return 0;
}

void asc_insertion_sort(int arr[], int n) {

    int i, j, k;

    for (i = 1; i < n; i++) {

        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = k;

    }

}

void dsc_insertion_sort(int arr[], int n) {

    int i, j, k;

    for (i = 1; i < n; i++) {
        
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = k;

    }

}

void print_array(int arr[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}