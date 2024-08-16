#include<stdio.h>
void sum(int x[],int b){
    int d=0;
    for(int i=0;i<b;i++){
        d+=x[i];
    }
    printf("Total Sum:%d",d);
}
int main(){
    int a;
    printf("Total digit of sum:");
    scanf("%d",&a);
    int number[a];
    printf("Enter %d number: ",a);
    for(int i=0;i<a;i++){
        scanf("%d",&number[i]);
    }
    sum(number,a);
    return 0;
}