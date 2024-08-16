#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a==0){
        printf("Zero is not a valid input");
    }
    else if(a<0){
        printf("Negative number is not valid input");
    }
    else if((a & (a - 1)) == 0){ //binary way te bitwise oparator use kora hoise//
        printf("YES BROH");
    }
    else{
        printf("NO BROH");
    }
    return 0;
}