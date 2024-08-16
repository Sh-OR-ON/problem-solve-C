#include <stdio.h>

// Declare the structure
struct Student {
    char name[100];   // Array of characters for the student's name
    char id[10];      // Array of characters for the student's ID
    float cgpa;       // Float value for the student's CGPA
};

int main() {
    // Declare a variable of the structure type
    struct Student student1;

    // Prompt the user to enter the student's name
    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);  // Read the name

    // Prompt the user to enter the student's ID
    printf("Enter student's ID: ");
    fgets(student1.id, sizeof(student1.id), stdin);  // Read the ID

    // Prompt the user to enter the student's CGPA
    printf("Enter student's CGPA: ");
    scanf("%f", &student1.cgpa);  // Read the CGPA

    // Display the values of the member variables
    printf("\nStudent Information:\n");
    printf("Name: %s", student1.name);
    printf("ID: %s", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}
