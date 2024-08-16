#include<stdio.h>
int main(){
    int i,j,a;
    printf("Enter the size of array:");
    scanf("%d",&j);
    int numbers[j], number_2[j];
    for(i=0;i<j;i++){
        printf("Enter the number:");
        scanf("%d",&numbers[i]);
    }
    printf("Now please input 2 nd array number\n");
    for(i=0;i<j;i++){
        printf("Enter the number:");
        scanf("%d",&number_2[i]);
    }
     for(i=0;i<j;i++){
        printf("%d\t",numbers[i] + number_2[i]);
    }
    
    return 0;
}