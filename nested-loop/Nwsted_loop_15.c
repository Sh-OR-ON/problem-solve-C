#include <stdio.h>

int main() {
    int i, j, n;
    

    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1) {
                printf("Z");
            } 
            else if (j == n - i - 1) {
                printf("Z");
            }
             else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}