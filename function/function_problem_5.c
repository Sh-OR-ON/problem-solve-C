#include<stdio.h>
void number(int a ,int b){
    if(a>b){
        printf("%d is greatter than %d",a,b);
    }
    else{
        printf("%d is less than %d",a,b);
    }
}
int main(){
    int c,d;
    printf("Enter your two number: ");
    scanf("%d %d",&c,&d);
    number(c,d);
    return 0;
}