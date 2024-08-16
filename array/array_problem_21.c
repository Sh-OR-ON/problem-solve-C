#include<stdio.h>
int main(){
    int i,j,a,b,n;
    printf("Enter 1st array size:");
    scanf("%d",&n);
    int number[n];
    printf("Array 1:");
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    printf("Enter 2nd array size:");
    scanf("%d",&a);
    int number_2[a];
    printf("Array 2:");
    for(j=0;j<a;j++){
        scanf("%d",&number_2[j]);
    }
    for(i=0;i<n;i++){
        b=0;
        for(j=0;j<a;j++){
           if(number[i]==number_2[j]){
            b=1;
           }
        }
        if(b==0){
            printf("%d ", number[i]);
        }
    }
    return 0;
}