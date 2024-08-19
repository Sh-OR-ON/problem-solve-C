#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("sample.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Contents of the file:\n");

    // Read and display each character until the end of the file
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
