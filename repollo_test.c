#include <stdio.h>
#include "repollo_sortalgo.h"

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {64, 25, 12, 22, 11};
    int arr2[] = {64, 25, 12, 22, 11};
    int arr3[] = {64, 25, 12, 22, 11};
    int arr4[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    printf("Original array: \n");
    printArray(arr1, n);

    bubbleSort(arr1, n);
    printf("Sorted array with Bubble Sort: \n");
    printArray(arr1, n);

    insertionSort(arr2, n);
    printf("Sorted array with Insertion Sort: \n");
    printArray(arr2, n);

    selectionSort(arr3, n);
    printf("Sorted array with Selection Sort: \n");
    printArray(arr3, n);

    quicksort(arr4, 0, n-1);
    printf("Sorted array with Quicksort: \n");
    printArray(arr4, n);

    return 0;
}

