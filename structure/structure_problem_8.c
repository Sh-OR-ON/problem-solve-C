#include<stdio.h>
#include<string.h>
struct person{
    char name[100];
    int id;
    float cgpa;
};
int main(){
    struct person person1, person2;

    //person1 input
    printf("Enter your name: ");
    fflush(stdin);
    gets(person1.name);
    printf("Enter your ID NO. : ");
    scanf("%d",&person1.id);
    printf("Enter your CGPA: ");
    scanf("%f",&person1.cgpa);

    //person2 input
    printf("Student 2 Information\n");


    printf("Enter your name: ");
    fflush(stdin); // eta string nile use korte hoi noito problem kore thake
    gets(person2.name);
    printf("Enter your ID NO. : ");
    scanf("%d",&person2.id);
    printf("Enter your CGPA: ");
    scanf("%f",&person2.cgpa);

    // compare good cgpa and print this person biodata

    if(person1.cgpa>person2.cgpa){
        printf("Name: ");
        puts(person1.name);
        printf("ID no: %d",person1.id);
        printf("\nCGPA: %.2f",person1.cgpa);
    }   
    else if(person1.cgpa< person2.cgpa){
        printf("Name: ");
        puts(person2.name);
        printf("ID no: %d",person2.id);
        printf("\nCGPA: %.2f",person2.cgpa);
    }
    else{
        printf("Student 1 and Student 2 are same cgpa");
    }
    
    return 0;

}