#include<stdio.h>
int main(){
    int col1,col2,row1,row2,i,j,k,sum=0,multi;
    printf("Enter 1st matrix row and coloum:");  // multiplication e 1st matrix er row1 er sate 2nd matrix er coloum2 gun hoy//
    scanf("%d %d",&col1,&row1);                  
    printf("Enter 2nd matrix row and coloum:");
    scanf("%d %d",&col2,&row2);
    int matrix_1[row1][col1],matrix_2[row2][col2];
    printf("Enter the matrix:");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&matrix_1[i][j]);
        }
    }
    printf("Enter 2nd matrix:");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&matrix_2[i][j]);
        }
    }
    printf("Now multiple new matrix:\n"); //new matrix e 1st matrix er row1 r 2nd matrix er coloum2 mile notun matrix et row and coloum toiri hoy//
    for(i=0;i<row1;i++){
        for(j=0;j<col2;j++){
            for(k=0;k<row2;k++){ // 1st matrix er coloum and 2nd matrix er row gun jay so je kono ekta dilei hobe//
                multi=sum + matrix_1[i][k] * matrix_2[k][j]; //kintu coding korar somoy code e gun er somoy chng hote thake first matrix etr coloum1 and 2nd matrix er row2//
                sum=multi;
            }
            printf("%d ",sum);
            sum=0;
        }
        printf("\n");
    }
    return 0;
}