#include <stdio.h>

// Function to print even numbers recursively
void printEven(int start, int end) {
    if (start > end)
        return;

    if (start % 2 == 0) {
        printf("%d ", start);
    }

    printEven(start + 1, end);
}

// Function to print odd numbers recursively
void printOdd(int start, int end) {
    if (start > end)
        return;

    if (start % 2 != 0) {
        printf("%d ", start);
    }

    printOdd(start + 1, end);
}

int main() {
    int start, end;
    char choice;

    // Ask the user to enter the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Ask the user to choose between even or odd numbers
    printf("Do you want to print even or odd numbers? (e/o): ");
    scanf(" %c", &choice);

    if (choice == 'e' || choice == 'E') {
        printf("Even numbers in the range %d to %d are: ", start, end);
        printEven(start, end);
    } else if (choice == 'o' || choice == 'O') {
        printf("Odd numbers in the range %d to %d are: ", start, end);
        printOdd(start, end);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
