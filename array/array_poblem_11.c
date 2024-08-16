#include<stdio.h>
int main(){
    int i,j;
    printf("Enter the array number:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Enter the number:");
        scanf("%d",&number[i]);
    }
    printf("Array A: ");
    for(i=0;i<j;i++){
        printf("%d\t", number[i]);
    }
    printf("\nArray B: ");
    for(i=j-1;i>=0;i--){
        printf("%d\t", number[i]);
    }
    return 0;
}