#include<stdio.h>
int main(){
    int i,j,a;
    printf("Enter the number:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Array number:");
        scanf("%d",&number[i]);
    }
    printf("Enter delete array position:");
    scanf("%d",&a);
    for(i=a;i<j;i++){
        number[i]=number[i+1];
    }
    for(i=0;i<j-1;i++){
        printf("%d\t",number[i]);
    }
    return 0;

}