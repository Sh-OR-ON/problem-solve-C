#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three angel:");
    scanf("%d %d %d", &a,&b,&c);
    if(a+b+c == 180 && a!=0 && b!=0 && c!=0){
        printf("YES BROH");
    }
    else{
        printf("NO BROH");
    }
    return 0;

}