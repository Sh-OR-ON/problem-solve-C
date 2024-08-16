#include<stdio.h>
#include<math.h>
void power(int c,int d){
    int result;
    result= pow(c,d);
    printf("%d to the power %d is: %d",c,d,result);
}
int main(){
    int a,b;
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Enter your power number: ");
    scanf("%d",&b);
    power(a,b);
    return 0;
}