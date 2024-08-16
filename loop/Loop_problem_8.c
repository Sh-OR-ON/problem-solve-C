#include<stdio.h>
#include<math.h>
int main (){
    int a,i,j;
    printf("Enter the number:");
    scanf("%d",&a);
    while(a>0){
        i=a%10; // eta math metical ekta bepar jeta te 10 er vagsese er maddome always amra last digit pai//
        printf("%d",i);
        a/=10; //assing korte edike vul korsilam//
    } //Loop er vitore arekta variable niye jodi increment diye dei thle loop ta koto bar choltese eta count kora jabe + ekta player koita word input dise seta o ber kora possible hobe//
    return 0;
}