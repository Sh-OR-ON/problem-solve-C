#include<stdio.h>
int main(){
    int i,j,a,b,c=0;
    printf("enter array number:");
    scanf("%d",&j);
    printf("Enter the 2nd array number:");
    scanf("%d",&a);
    int number[j], number_2[a];
    for(i=0;i<j;i++){
        printf("Enter the number:");
        scanf("%d",&number[i]);
    }
    for(b=0;b<a;b++){
        printf("Enter array index:");
        scanf("%d",&number_2[b]);
    }
    for(i=0;i<j;i++){
        for(b=0;b<a;b++){
            if(number[i]==number_2[b]){
                printf(" %d ",number_2[b]);
                c++;
            }  
        }
    }  
        if(c==0){
            printf("Error\n");
        }
    

    return 0;
}