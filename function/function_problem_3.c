#include<stdio.h>
void number(int a){
    if(a%2==0){
        printf("This is an even number");
    }
    else{
        printf("This is an odd number");
    }
}
int main(){
    int b;
    printf("Enter your number: ");
    scanf("%d",&b);
    number(b);
    return 0;
}