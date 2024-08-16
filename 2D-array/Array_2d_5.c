#include<stdio.h>
int main(){
    int i,j,n,a;
    printf("Enter the coloum and row:");
    scanf("%d %d",&n,&a); 
    int array[n][a];
    for(j=0;j<a;j++){
        for(i=0;i<n;i++){
            if(i==j){
                array[i][j]=1;
            }
            else{
                array[i][j]=0;
            }
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