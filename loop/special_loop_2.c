#include<stdio.h>
int main(){
    int i,j,a=1,b=3;
    printf("Enter the number:");
    scanf("%d",&j);
    printf("%d\t",a);
    for(i=1;i<j;i++){
        a+=b;
        printf("%d\t",a);
        b+=2;
    }

    return 0;
}