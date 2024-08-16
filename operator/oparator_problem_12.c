#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the three number:");
    scanf("%d %d %d",&a,&b,&c);
    d=sqrt(pow(b,2)- 4*a*c);
    printf("When it's oparator is positive\n");
    e=(-b+d)/2*a;
    printf("The result is:%d\n",e);
    printf("when it is negative\n");
    e=(-b-d)/2*a;
    printf("The result is:%d\n",e);
    return 0;



}