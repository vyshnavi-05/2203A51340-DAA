#include <stdio.h>

void merge(int arr[], int left[], int right[], int leftSize, int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        arr[k++] = left[i++];
    }

    while (j < rightSize) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return;
    }

    int mid = size / 2;
    int left[mid];
    int right[size - mid];
int i;
    for (i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, size - mid);
    merge(arr, left, right, mid, size - mid);
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7},i;
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, size);

    printf("Sorted array: ");
    for  (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

