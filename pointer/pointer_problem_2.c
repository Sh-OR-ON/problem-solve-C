#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your two number: ");
    scanf("%d %d",&a,&b);
    int *ptr1, *ptr2;
    ptr1=&a;
    ptr2=&b;
    
    if(*ptr1>*ptr2){
        printf("Maximum value: %d", *ptr1);
    }
    else if(*ptr1<*ptr2){
        printf("Maximum value: %d", *ptr2);
    }
    return 0;
}