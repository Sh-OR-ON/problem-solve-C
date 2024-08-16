#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d",n-j);
        }
        printf("\n");
    }
    return 0;
}