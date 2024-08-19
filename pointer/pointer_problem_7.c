#include<stdio.h>

int main() {
    int a, sum = 0;
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
    
    // Reset the pointer to the start of the array
    ptr = &array[0];
    
    // Calculate the sum of the array elements
    for(i = 0; i < a; i++) {
        sum += *ptr;
        ptr++;
    }
    
    printf("Total sum of this array: %d\n", sum);

    return 0;
}
