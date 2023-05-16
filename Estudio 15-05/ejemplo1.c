#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 5, 8, 15, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("El elemento máximo del arreglo es: %d\n", findMax(arr, size));
    return 0;
}
