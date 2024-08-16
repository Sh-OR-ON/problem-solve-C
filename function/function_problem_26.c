#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void real_display(int x[][100],int a,int b){ //2D te 2nd index function e call kore nite hoi
    printf("Display matrix:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}
void multiply_display(int x[][100],int a,int b,int c){
    printf("%d multiple matrix:\n",c);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ", c * x[i][j]);
        }
        printf("\n");
    }

}
int main(){
    int row,col,d;
    printf("Enter the matrix row and coloum: ");
    scanf("%d %d",&row,&col);
    int matrix[100][100]; //sir er kase qustion kno ei khane direct row r coloum dile ulta palta ase
    printf("Enter matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    real_display(matrix,row,col);
    printf("Enter your multiply number: ");
    scanf("%d",&d);
    multiply_display(matrix,row,col,d);
    return 0;
}