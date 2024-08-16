#include<stdio.h>
int main(){
    int i,j,a,k,b;
    b=a-i;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a/2;i++){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for(i=a/2+1;i>=1;i--){
        for(j=1;j<=a-i;j++){
            printf(" ");
        }
        for(k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}