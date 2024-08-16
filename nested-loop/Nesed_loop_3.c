#include<stdio.h>
int main(){
    int i,j,n,a=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       a++;
       for(j=0;j<=i;j++){
        printf("%d",j+a);
       }
       printf("\n");
    }
    return 0;
}