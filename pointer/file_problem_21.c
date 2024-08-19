#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256];
    int n;

    // Open the file in append mode
    file = fopen("sample.txt", "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the number of lines you want to append: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character after entering the number

    printf("Enter the lines:\n");

    for (int i = 0; i < n; i++) {
        fgets(line, sizeof(line), stdin); // Read a line from the user
        fputs(line, file); // Append the line to the file
    }

    // Close the file
    fclose(file);

    printf("Lines appended successfully.\n");

    return 0;
}
