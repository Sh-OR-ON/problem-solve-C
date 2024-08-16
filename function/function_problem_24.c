#include<stdio.h>
#include<math.h>
int GCD_value(int c,int d){
    int rem;
    if(d<c){
        while(d!=0){
            rem=c%d;
            c=d;
            d=rem;
        }
        return c;
    }
    else{
        while(c!=0){
            rem=d%c;
            d=c;
            c=rem;
        }
        return d;
    }
}
int LCD_value(int c,int d){
    int rem;
    rem=(c*d)/GCD_value(c,d);
    return rem;
}
int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    int result=GCD_value(a,b);
    printf("GCD value: %d\n",result);
    int result_2=LCD_value(a,b);
    printf("LCD value: %d\n",result_2);
    return 0;
}