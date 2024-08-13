#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int arr[], int n);
void display(int arr[], int n);

void bubbleSort(int arr[], int n) {
    int temp;
    bool isSwaped; //Flag to check if any elements were swapped during the pass

    for (int i = 0; i < n-1; i++) {
        isSwaped = false; //Reset the swap flag at the beginning of each pass

        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
                isSwaped = true;
            }
        }

        //If no elements were swapped in the inner loop, the array is already sorted
        if (isSwaped == false) break;
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {4, 3, 2, 10, 12, 1, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Before Sort => ");
    display(arr, length);
    bubbleSort(arr, length);
    printf("\nAfter Sort  => ");
    display(arr, length);
    return 0;
}