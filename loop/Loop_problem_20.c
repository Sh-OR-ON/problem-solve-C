#include<stdio.h>
int main(){
    int i,j,a=0,b=0;
    printf("Enter the number:");
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        a=a*10+i;
        b+=a;
    }
    printf("%d total number of series:%d",j,b);
    return 0;
}