#include<stdio.h>
#include<math.h>
int main(){
    const float PI=3.1416;
    float r,A;
    printf("enter the r: ");
    scanf("%f",&r);
    A=2*PI*r;
    printf("Area:%.2f",A);
    return 0;

}