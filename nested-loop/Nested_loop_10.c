#include<stdio.h>
int main(){
    int a,i,j,k;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
        
    }
}