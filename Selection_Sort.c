#include <stdio.h>

void selectionSort(int arr[], int n) {
    int minIndex, temp;
    for (int i = 0; i < n-1; i++) {
        minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void display (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sort => ");
    display(arr, length);
    selectionSort(arr, length);
    printf("\nAfter Sort  => ");
    display(arr, length);
    return 0;
}
