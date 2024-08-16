#include<stdio.h>
int main(){
    int i,j,a=1;
    printf("Enter the number:");
    scanf("%d",&j);
    for(i=j;i>0;i--){
        a*=i;
    }
    printf("%d",a);
    return 0;
}