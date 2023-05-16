#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    selectionSort(arr, size);

    printf("\nArreglo ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
