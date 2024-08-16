#include<stdio.h>
int main(){
    int col1,row1,max,index,i,j,m_row,m_col;
    printf("Enter matrix row and coloum:"); 
    scanf("%d %d",&col1,&row1);                  
    int matrix_1[row1][col1];
    printf("Enter the matrix:");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&matrix_1[i][j]);
        }
    }
    max=matrix_1[0][0];
    m_row=0;
    m_col=0; //first e ei khane vul korsilam age index 0 0 dhore nite hobe noito first e max value thakle index ulta palta dekay//
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            if(max<matrix_1[i][j]){
                max=matrix_1[i][j];
                m_row=i;
                m_col=j;
            }
        }
    }
    printf("Max Matrix: %d\n",max);
    printf("Max Index[%d][%d]",m_row,m_col);
    return 0;
}
