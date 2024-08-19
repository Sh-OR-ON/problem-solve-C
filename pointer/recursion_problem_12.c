#include <stdio.h>

// Function to print array elements recursively
void printArray(int arr[], int index, int size) {
    if (index < size) {
        printf("%d ", arr[index]);
        printArray(arr, index + 1, size);
    }
}

int main() {
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array elements using recursion
    printf("Array elements are: ");
    printArray(arr, 0, n);

    return 0;
}
