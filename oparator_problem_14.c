#include<stdio.h>
#include<math.h>
int main(){
    float a;
    printf("Enter the number:");
    scanf("%f",&a);
    printf("the float number is:%.2f\n",a);
    int result=ceil(a);
    printf("the ceil number is:%d\n",result);
    result=round(a);
    printf("the round number is:%d\n",result);
    result=floor(a);
    printf("the floor number is:%d\n",result);

}