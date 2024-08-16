#include<stdio.h>
int main(){
    int i,j,n,a;
    printf("Enter the coloum and row:");
    scanf("%d %d",&n,&a); 
    int array[n][a];
    printf("Enter array number:");
    for(i=0;i<n;i++){
        for(j=0;j<a;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<a;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}