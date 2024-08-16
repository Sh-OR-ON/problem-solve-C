#include <stdio.h>
#include <string.h>

// Declare the structure
struct Student {
    char name[100];   // Array of characters for the student's name
    char id[10];      // Array of characters for the student's ID
    float cgpa;       // Float value for the student's CGPA
};

int main() {
    // Initialize a structure with default values
    struct Student student1 = {"John Doe", "12345", 3.75}; //string er hole "" eta use kora lage

    // Print the structure members
    printf("Name: %s\n", student1.name);
    printf("ID: %s\n", student1.id);
    printf("CGPA: %.2f\n", student1.cgpa);

    return 0;
}