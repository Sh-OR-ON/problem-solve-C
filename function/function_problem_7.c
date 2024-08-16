#include<stdio.h>
void sum(int x[],int b){
    int d=0;
    for(int i=0;i<b;i++){
        d+=x[i];
    }
    printf("Total Sum in function: %d",d);
}
int main(){
    int a,e=0;
    printf("Total digit of sum:");
    scanf("%d",&a);
    int number[a];
    printf("Enter %d number: ",a);
    for(int i=0;i<a;i++){
        scanf("%d",&number[i]);
    }
    for(int i=0;i<a;i++){
        e+=number[i];
    }
    printf("Total sum in main: %d\n",e);
    sum(number,a);
    return 0;
}