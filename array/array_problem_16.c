#include<stdio.h>
int main(){
    int i,j;
    printf("Ener Array number:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Enter array number:");
        scanf("%d",&number[i]);
    }
    for(i=0;i<j;i++){
        if(i%2!=0){
            number[i]=0;
        }
    }
    printf("Array: ");
    for(i=0;i<j;i++){
        printf(" %d ",number[i]);
    }


    return 0;
}