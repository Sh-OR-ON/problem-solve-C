#include<stdio.h>

int main() {
    int a;
    printf("Enter array size: ");
    scanf("%d", &a);  // Removed the space after %d
    
    int array[a];
    int *ptr, i;
    ptr = &array[0];
    
    printf("Enter your array: ");  // Corrected the typo in printf
    for(i = 0; i < a; i++) {
        scanf("%d", ptr);  // No need to dereference the pointer in scanf
        ptr++;
    }
    
    // Set the pointer to the last element of the array
    ptr = &array[a - 1];
    
    printf("Print your reverse array: ");  // Corrected the typo in "reverse"
    for(i = a - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;  // Move the pointer to the previous element
    }
    
    return 0;
}
