#include<stdio.h>
#include<math.h>
int main(){
    int x;
    float e;
    printf("Enter X value number:");
    scanf("%d",&x);
    e = 2 * pow(cos(x), 2) - sqrt(3) * sin(x) + sin(x / 2);
    printf("the number is:%f",e);
    return 0;


}