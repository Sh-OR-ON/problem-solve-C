#include<stdio.h>
int revarse(int *c,int *d){
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("In this funtion: %d %d\n",*c,*d);
    return *c,*d;
}
int main(){
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    revarse(&a,&b); //this is pointer method, jodi simple way te korte chai etar pore normal way diye bekora jabe
    printf("In this main: %d %d",a,b);
    return 0;
}