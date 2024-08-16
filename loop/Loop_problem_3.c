#include<stdio.h>
int main(){
    int i,j;
    printf("enter what time you want:");
    scanf("%d",&j);
    for(i=1;i<=j;i++){  //Loop e besir vag condition e vul kortesi//
        if(i%2 == 0){
            printf("0\t");
        }
        else{
            printf("1\t");
        }
    }
    return 0;
}