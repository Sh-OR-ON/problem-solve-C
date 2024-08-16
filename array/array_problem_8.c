#include<stdio.h>
int main(){
    int i,j;
    printf("Enter the number");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Enter the number:");
        scanf("%d",&number[i]);
    }
    int max=number[0];
    int max_Index= 0;
    for(i=0;i<j;i++){
        if(max<number[i]){
            max=number[i];
            max_Index=i;
        }
    }
     int min=number[0];
    int min_Index= 0;
    for(i=0;i<j;i++){
        if(min>number[i]){
            min=number[i];
            min_Index=i;
        }
    }
    printf("MAX:%d\n",max);
    printf("Index:%d\n",max_Index);
    printf("MIN:%d\n",min);
    printf("Index:%d\n",min_Index);
    
    
    return 0;
}