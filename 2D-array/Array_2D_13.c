#include<stdio.h>
int main(){
    int row1,col1,a=0,b=0,c=0,d;
    printf("Enter row and coloum:");
    scanf("%d %d",&row1,&col1);
    d=row1 * col1;
    int matrix[row1][col1];
    printf("Enter matrix:");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
            for(int j=0;j<col1;j++){
                for(int i=0;i<row1;i++){
                    if(matrix[i][j]== matrix[j][i]){
                        a++;
                    }
                }
            }
            if(a==d){
                printf("This is Symmetric Matrix");
            }
            else {
                printf("This is not Symmetric Matrix");
            }
    return 0;
}
        