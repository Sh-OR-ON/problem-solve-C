#include<stdio.h>
int main(){
    int i,j,a=0,b=0; //loop er vitore variable barano komano hole loop er age variable e 1 or 0 rakhte hobe noito code run e problem face korte hoi//
    printf("Enter the series last digit:");
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        if(i%2==0){
            a+=i;
        }
        else {
            b+=i;
        }
    }
    printf("Total number is:%d",b-a);
    return 0;
}