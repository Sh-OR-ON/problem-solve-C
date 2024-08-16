#include<stdio.h>
int main(){
    int i,j;
    printf("Enter the number:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Enter array index:");
        scanf("%d", &number[i]);
    }
    for(i=0;i<j;i++){
        if(number[i]%3==0){
            number[i]=-1;
        }
    }
    printf("Array:");
    for(i=0;i<j;i++){
       printf(" %d", number[i]);
    }
    return 0;
}