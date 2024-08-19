#include<stdio.h>

// Recursive function to calculate the sum from b to c
int result(int b, int c) {
    int a = 0;
    if (b > c) {
        return a;  // Base case: when b exceeds c, return 0
    }
    a += b;  // Add the current value of b to a
    return a + result(b + 1, c);  // Return the current sum and recurse for the next number
}

int main() {
    int a;
    printf("Enter the last number: ");
    scanf("%d", &a);

    int sum = result(1, a);  // Call the recursive function
    printf("Total sum: %d\n", sum);

    return 0;
}
