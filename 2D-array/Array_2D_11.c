#include<stdio.h>
int main(){
    int col1,row1,total=0,i,j,n;
    printf("Enter matrix row and coloum:"); 
    scanf("%d %d",&col1,&row1); 
    n=col1;                 
    int matrix_1[row1][col1];
    printf("Enter the matrix:");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&matrix_1[i][j]);
        }
    }
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            if(j%2!=0 || i%2!=0){
                total+= matrix_1[i][j];
            }
        }
    }
    printf("Total number:%d",total);
    return 0;
}