#include<stdio.h>
int main(){
    int first=0,secound=1,count=0,fibo,i;
    printf("Enter the number:");
    scanf("%d",&i);
    while(count<i){
    if(count<=1){
        fibo=count;
    }
    else{
        fibo=first+secound;
        first=secound;
        secound=fibo;
    }
    printf("%d\t",fibo);
    count++;
    }

    return 0;
}