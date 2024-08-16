#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                printf("*");
            } 
            else {
                if (j == 0 || j == n - 1)
                 {
                    printf("*");
                }
                else {
                    printf("_");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
    