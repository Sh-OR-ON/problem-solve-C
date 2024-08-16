#include<stdio.h>
int main(){
    float a,b,x;
    printf("enter the a and b number:");
    scanf("%f %f", &a, &b);
    x=((3.31*(a*a)+2.01*(b*b*b))/(7.16*(b*b)+2.01*(a*a*a)));
    printf("The number is X=%f",x);

return 0;
}