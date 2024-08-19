#include<stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);  // Removed the extra space at the end

    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;

    // Swapping the values using pointers
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    // Corrected the print statement
    printf("Reversed numbers: %d to %d\n", a, b);

    return 0;
}
