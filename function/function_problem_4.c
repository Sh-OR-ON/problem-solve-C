#include<stdio.h>
void number(int a){
    if(a>=0){
        printf("This is positive number");
    }
    else{
        printf("This is nagative number");
    }
}
int main(){
    int c;
    printf("Enter your two number: ");
    scanf("%d",&c);
    number(c);
    return 0;
}