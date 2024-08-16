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

    // Assign values to the structure members
    // For example:
    student1.cgpa = 3.75;

    // Print the structure member to confirm
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}