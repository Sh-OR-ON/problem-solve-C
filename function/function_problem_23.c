#include<stdio.h>
#include<math.h>

// Function to display the matrix
void real_display(int x[][100], int a, int b) {
    printf("Display matrix:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");  // Correct newline character
    }
}

// Function to multiply the matrix by a scalar and display the result
void multiply_display(int x[][100], int a, int b, int c) {
    printf("%d multiple matrix:\n", c);
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("%d ", c * x[i][j]);
        }
        printf("\n");  // Correct newline character
    }
}

int main() {
    int row, col, d;
    printf("Enter the matrix row and column: ");
    scanf("%d %d", &row, &col);
    int matrix[100][100];  // Use a fixed size array for simplicity

    printf("Enter matrix elements:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);  // Correct input scanning
        }
    }

    real_display(matrix, row, col);

    printf("Enter your multiply number: ");
    scanf("%d", &d);  // Correct input scanning

    multiply_display(matrix, row, col, d);

    return 0;
}
