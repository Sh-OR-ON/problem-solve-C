#include<stdio.h>
int main(){
    int i,j,n,a;
    printf("Enter the coloum and row:");
    scanf("%d %d",&n,&a); 
    int array[n][a];
    printf("Enter array number:");
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            printf("Array[%d][%d]",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Major Diagonal:");
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            if(i==j){
                printf("%d ",array[i][j]);
            }
        }
    }
    printf("\nMinor Diagonal:");
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            if(i+j==n-1){
                printf("%d ",array[i][j]);
            }
        }
    }

    return 0;
}