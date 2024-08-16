#include<stdio.h>
int main(){
    int i,j;
    printf("Enter the number:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Enter the number:");
        scanf("%d",&number[i]);
    }
    int a,b=0;
    int Index=0;
    printf("ente the srh number:");
    scanf("%d",&a);
    for(i=0;i<j;i++){
        if(number[i]==a){
            Index=i;
            b++;
            printf("found at index number:%d\n", Index);
        }
    }
    if(b==0){
    printf("Item is not found");
    }

    return 0;

}