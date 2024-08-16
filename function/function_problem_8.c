#include<stdio.h>
void less(int x[],int b){
    int temp;
    for(int i=0;i<b;i++){
        for(int j=i+1;j<b;j++){
            if(x[i]>x[j]){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(int i=0;i<b;i++){
        printf("%d ",x[i]);
        
    }
}
int main(){
    int a;
    printf("Enter total number: ");
    scanf("%d",&a);
    int number[a];
    printf("Enter %d number: ",a);
    for(int i=0;i<a;i++){
        scanf("%d",&number[i]);
    }
    less(number,a);
    return 0;
}