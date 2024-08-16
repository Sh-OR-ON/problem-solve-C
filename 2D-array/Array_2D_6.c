#include<stdio.h>
int main(){
    int i,j,n,a;
    printf("Enter the coloum and row:");
    scanf("%d %d",&n,&a); 
    int array[n][a],array_2[n][a],array_3[n][a];
    printf("Enter 1st array number:\n");
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            printf("Array[%d][%d]",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Enter 2nd array number:\n");
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            printf("Array[%d][%d]",i,j);
            scanf("%d",&array_2[i][j]);
        }
    }
    printf("total array number:\n");
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            printf(" %d ",array[i][j]+array_2[i][j]);
        }
        printf("\n");
    }
    return 0;
}