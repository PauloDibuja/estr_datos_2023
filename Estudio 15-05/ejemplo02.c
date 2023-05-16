#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] > target) {
            return binarySearch(arr, left, mid - 1, target);
        }

        return binarySearch(arr, mid + 1, right, target);
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int result = binarySearch(arr, 0, size - 1, target);
    
    if (result == -1) {
        printf("El elemento no se encuentra en el arreglo.\n");
    } else {
        printf("El elemento se encuentra en el índice: %d\n", result);
    }

    return 0;
}
