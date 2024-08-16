#include<stdio.h>
#include<math.h>
int main(){
    int i,j,a,b,c,d;
    printf("Enter the two number:");
    scanf("%d %d",&a,&b);
    c=a;
    d=b;
    while (b>0){
        i= a%b;
        a=b;
        b=i;
    }
    printf("GCD value is : %d\n",a);
    printf("LCM value is : %d\n",(c*d)/a);
    return 0;
}