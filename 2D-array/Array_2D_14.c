#include<stdio.h>
int main(){
    int row1,col1,a=0,b=0,c=0;
    printf("Enter row and coloum:");
    scanf("%d %d",&row1,&col1);
    int matrix[row1][col1];
    printf("Enter matrix:");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            b=matrix[i][j];  //matrix er man call korar jonno age ekta valiableniye call kore rakhte hoi//
            for(int k=0;k<row1;k++){
                for(int m=0;m<col1;m++){
                    c=matrix[k][m];
                    if(b==c){
                        a++;
                        if(a>1){
                            matrix[k][m]=-1;
                        }
                    }
                }
            }
            a=0;
        }
        
    }
    printf("New matrix:\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}