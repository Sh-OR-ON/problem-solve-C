#include<stdio.h>
int main(){
    int i,j,k;
    printf("Enter the array number:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Eter the array index:");
        scanf("%d",&number[i]);
    }
    for(i=0;i<j;i++){
        for(k=i+1;k<j;k++){ // ei khane 1 theke milanor karon match khacce naki dektesi, choto theke boro sajano hoitese na//
            if(number[i]==number[k]){
                for(i = k; i < j - 1; i++) { //jodi mile jay tokon 1 ghor kore ekta ekta kore man agaiye agiye ese bosbe tai ei ta use kora hoise//
                    number[i] = number[i + 1];
                }
              j--;
              k--;
            }
        }
    }
     for(i=0;i<j;i++){
        printf(" %d ",number[i]);
    }
    return 0;
}