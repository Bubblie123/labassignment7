#include <stdio.h>
#include <stdlib.h>

int bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr[] = {97,16,45,63,13,22,7,58,72};
    printf("Original Array:\n");
    printArray(arr, 9);
    printf("Number of Swaps Required: %d\n", bubbleSort(arr, 9));
    printf("Bubble Sorted Array:\n");
    printArray(arr, 9);

    return 0;
}

int bubbleSort(int arr[], int n) {
    int swapCounter = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                ++swapCounter;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}