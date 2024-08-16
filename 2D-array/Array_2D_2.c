#include<stdio.h>
int main(){
    int i,j,n,a;
    printf("Enter the coloum and row:");
    scanf("%d %d",&n,&a); 
    int array[n][a];
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            printf("Array[%d][%d]",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("coloum_wise:");
    for(i=0;i<n;i++){
        for(j=0;j<a;j++){
            printf("%d ",array[i][j]);
        }
    }
    printf("\nRow_wise:");
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            printf("%d ",array[i][j]);
        }
    }
    return 0;
} 