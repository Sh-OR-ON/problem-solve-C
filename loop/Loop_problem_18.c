#include<stdio.h>
int main(){
    int i,j,a,b=0;
    printf("Enter the number:");
    scanf("%d",&j);
    a=j;
    while(j>0){
        i=j%10;
        b= b*10 + i;
        j/=10;
    }
    if(a==b){
        printf("Yes bro this is palindrome\n");
    }
    else{
        printf("No bro this is not palindrome\n");
    }
    return 0;
}