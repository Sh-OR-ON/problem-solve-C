#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0 || j==n-1){
                printf("H");
            }
            else if(i==n/2){
                printf("H");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}