#include <stdio.h>

void insertionSort (int arr[], int n);
void display (int arr[], int n);

void insertionSort (int arr[], int n) {
    int key, i, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && key < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertionSort(arr, length);
    printf("\nAfter Sort  => ");
    display(arr, length);
    return 0;    
}