#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==n/2 || j==n/2 || i+j == n/2 || j-i==n/2 || i-j==n/2 || i+j==3*(n/2)){ // logic vai logic//
                printf("$");
            }
            else{
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;

}