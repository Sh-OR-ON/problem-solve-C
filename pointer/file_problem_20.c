#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char ch;
    int lines = 0;

    // Open the file in read mode
    file = fopen("sample.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read each character and count the number of newlines
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    // Close the file
    fclose(file);

    // If the file is not empty, increment the line count by 1 for the last line
    if (lines != 0 || ch != '\n') {
        lines++;
    }

    printf("The file contains %d lines.\n", lines);

    return 0;
}
