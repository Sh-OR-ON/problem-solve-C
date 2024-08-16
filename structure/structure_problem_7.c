#include<stdio.h>
#include<string.h>
struct person {
    char name[100];
    int id;
    float cgpa;
};
int main(){

    // Input student information


    struct person person1;
    printf("Enter your name: ");
    gets(person1.name);
    printf("Enter your ID NO. :");
    scanf("%d",&person1.id);
    printf("Enter your CGPA: ");
    scanf("%f",&person1.cgpa);


    // print this student information

    printf("Name: ");
    puts(person1.name);
    printf("ID no: %d",person1.id);
    printf("\nCGPA: %.2f",person1.cgpa);

    return 0;

    
}
