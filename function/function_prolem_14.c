#include<stdio.h>
void display(int x[],int b){
    for(int i=0;i<b;i++){
        if(x[i]%2==0 || x[i]==0){
            printf("%d ",x[i]);
        }
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