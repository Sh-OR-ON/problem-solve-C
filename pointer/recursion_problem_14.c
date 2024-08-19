#include <stdio.h>

// Function to find the largest element recursively
int findLargest(int arr[], int n) {
    // Base case: if the array has only one element, return it
    if (n == 1)
        return arr[0];

    // Recursive case: compare the last element with the largest of the remaining elements
    int max = findLargest(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
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

    // Find and print the largest element using recursion
    int largest = findLargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
