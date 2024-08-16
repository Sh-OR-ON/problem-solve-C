#include<stdio.h>
int main(){
    int i,j;
    printf("Enter array size:");
    scanf("%d",&j);
    int number[j]; //array size ta first int e declear kora jay na,pore alada kore korte hoi//
    for(i=0;i<j;i++){  //j dhara agei int e number size bole rakhte hobe//
        printf("Enter the number:");
        scanf("%d",&number[i]);
    }
    for(i=j-1;i>=0;i--){
        printf("%d\t",number[i]);
    }
 
    return 0;
}