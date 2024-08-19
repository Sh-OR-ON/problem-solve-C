#include <stdio.h>

// Function to count digits recursively
int countDigits(int num) {
    // Base case: if the number is reduced to 0, stop recursion
    if (num == 0)
        return 0;
    else
        return 1 + countDigits(num / 10); // Reduce the number by dividing by 10 and increase count by 1
}

int main() {
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case when the user enters 0
    if (num == 0) {
        printf("The number of digits is: 1\n");
    } else {
        // Count the digits of the number using recursion
        int digitCount = countDigits(num);
        printf("The number of digits is: %d\n", digitCount);
    }

    return 0;
}
