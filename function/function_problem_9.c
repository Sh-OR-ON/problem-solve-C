#include<stdio.h>
void fectorial(int b){
int c=1,d=0;
for(int i=b;i>0;i--){
    c*=i;
}
printf("fectorial number:%d ",c);
}

int main(){
    int a;
    printf("Enter the numbr: ");
    scanf("%d",&a);
    fectorial(a);
    return 0;
}