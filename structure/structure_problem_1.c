#include <stdio.h>

// Declare the structure
struct Student {
    char name[100];   // Array of characters for the student's name
    char id[10];      // Array of characters for the student's ID
    float cgpa;       // Float value for the student's CGPA
};

int main() {
    // Example of how to use the structure
    struct Student student1;

    // Assigning values to the structure members
    strcpy(student1.name, "John Doe");
    strcpy(student1.id, "12345");
    student1.cgpa = 3.75;

    // Print the structure members
    printf("Name: %s\n", student1.name);
    printf("ID: %s\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}