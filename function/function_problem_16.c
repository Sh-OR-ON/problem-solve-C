#include<stdio.h>
void display(int x[],int b){
    int c=0;
    for(int i=0;i<b;i++){
        c=2*x[i];
            printf("%d ",c);
    }
}
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int number[a];
    printf("Enter %d number: ",a);
    for(int i=0;i<a;i++){
        scanf("%d",&number[i]);
    }
    display(number,a);
    return 0;
}