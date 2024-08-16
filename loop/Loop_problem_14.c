#include<stdio.h>
int main(){
    int i,j,a=1,b=1,c,d=1;
    printf("Enter the n & r number:");
    scanf("%d %d",&j,&c);
    for(i=j;i>0;i--){
        a*=i;
    }
    for(i=c;i>0;i--){
        b*=i;
    }
    for(i=(j-c);i>0;i--){
        d*=i;
    }
    printf("Your result:%d",a/(b*d));
    return 0;
}