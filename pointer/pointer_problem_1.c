#include<stdio.h>
int main(){
    int x,y;
    printf("Enter your two number: ");
    scanf("%d %d",&x,&y);
    int sum;
    int *ptr1,*ptr2; //pointer * diye bujano hoy
    ptr1=&x;
    ptr2=&y;
    sum=*ptr1 + *ptr2;
    printf("Total number: %d",sum);
    return 0;
}