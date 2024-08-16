#include<stdio.h>
void minimum(int x[],int b){
    int c=0,d=0;
    for(int i=0;i<b;i++){
        for(int j=0;j<b;j++){
            if(x[i]>=x[j]){ 
                c=x[i];
                x[i]=x[j];
                x[j]=c;
                d=x[i];
            }
        }
    }
    printf("minimum number: %d",d);
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
    minimum(number,a);
    return 0;
}
