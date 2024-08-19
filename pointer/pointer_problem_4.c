#include<stdio.h>
#include<string.h>

int main() {
    char a[100];
    printf("Enter your name: ");
    fgets(a, sizeof(a), stdin);  // Use fgets instead of gets

    // Remove the newline character that fgets adds
    a[strcspn(a, "\n")] = '\0';

    char *ptr;
    ptr = a;  // Point ptr to the start of the array `a`
    
    int d = 0;
    d = strlen(ptr);  // Calculate the length of the string
    
    printf("Total size of this array: %d\n", d);
    return 0;
}
