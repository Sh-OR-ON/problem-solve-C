#include<stdio.h>
#include<string.h>
struct person{
    char name[100];
    int id;
    float cgpa;
};
void display(struct person p){
    printf("Name: ");
    puts(p.name);
    printf("ID no: %d",p.id);
    printf("\nCGPA: %.2f",p.cgpa);
}
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
    if(person1.cgpa>person2.cgpa){
        display(person1);
    }
    else{
        display(person2);
    }
    
    return 0;
}