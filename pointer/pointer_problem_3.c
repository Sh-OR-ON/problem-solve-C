#include<stdio.h>

int main() {
    int a;
    printf("Enter array size: ");
    scanf("%d", &a);  // Removed the space after %d
    int array[a];
    int *ptr, i;
    ptr = &array[0];
    
    printf("Enter your array: ");
    for(i = 0; i < a; i++) {
        scanf("%d", ptr);  // No need to dereference ptr in scanf
        ptr++;
    }

    // Reset the pointer to the start of the array
    ptr = &array[0];
    
    printf("Print your array: ");
    for(i = 0; i < a; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
