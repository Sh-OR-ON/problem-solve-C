#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome using recursion
int isPalindrome(char str[], int start, int end) {
    // Base case: if the start index is greater than or equal to the end index, the string is a palindrome
    if (start >= end)
        return 1;

    // Recursive case: compare characters at start and end, and recursively check the rest
    if (str[start] == str[end])
        return isPalindrome(str, start + 1, end - 1);
    else
        return 0;
}

int main() {
    char str[100];

    // Ask the user to enter a string
    printf("Enter a string: ");
    gets(str);

    // Calculate the length of the string
    int len = strlen(str);

    // Check if the string is a palindrome
    if (isPalindrome(str, 0, len - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
