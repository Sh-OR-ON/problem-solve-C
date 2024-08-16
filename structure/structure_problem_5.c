#include <stdio.h>
#include <string.h>

// Declare the structure
struct Student {
    char name[100];   // Array of characters for the student's name
    char id[10];      // Array of characters for the student's ID
    float cgpa;       // Float value for the student's CGPA
};

int main() {
    // Declare a variable of the structure type
    struct Student student1;

    // Assign values to the structure members
    strcpy(student1.name, "Alice Smith");  // Assign a name
    strcpy(student1.id, "S1234567");       // Assign an ID
    student1.cgpa = 3.85;                  // Assign a CGPA

    // Display the values of the member variables
    printf("Name: %s\n", student1.name);
    printf("ID: %s\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}
