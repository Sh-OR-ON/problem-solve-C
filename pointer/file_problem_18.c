#include<stdio.h>

int main() {
    FILE *file;
    char name[20], ch;

    // Open file for appending
    file = fopen("sample.txt", "a");
    if (file == NULL) {  // Check if the file was opened successfully
        printf("File doesn't exist or cannot be opened.\n");
        return 1;  // Exit the program if the file couldn't be opened
    } else {
        printf("Enter your name: ");
        scanf("%s", name);  // Corrected usage of scanf

        fprintf(file, "%s\n", name);  // Write the name to the file
        fclose(file);  // Close the file after writing
    }

    // Open file for reading
    file = fopen("sample.txt", "r");
    if (file == NULL) {  // Check if the file was opened successfully
        printf("File doesn't exist or cannot be opened.\n");
        return 1;  // Exit the program if the file couldn't be opened
    } else {
        while ((ch = fgetc(file)) != EOF) {  // Read each character until EOF
            printf("%c", ch);  // Print each character
        }
        fclose(file);  // Close the file after reading
    }

    return 0;
}
