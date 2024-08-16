#include<stdio.h>
int main(){
    int i,j,min,temp,a,b,k;
    printf("ENTER THE NUMBER:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Enter array index:");
        scanf("%d",&number[i]);
    }
    printf("Less than to geater than array:");
    for(i=0;i<j;i++){
        for(k=0;k<j;k++){ //ei loop ta protibar aisa aisa i er man jeta dhore oi tar sate milaiya milaiya deika jay boro naki soto//
            if(number[i]< number[k]){
               temp=number[i];
               number[i]=number[k];
               number[k]=temp;   // index k er jayga te khali holo r k er jayga te i er dindex ta chole gelo fole eta porer loop e cholar somoy abar tulona korte parbe //
            }
      
       }
    }
    for(i=0;i<j;i++){
        printf(" %d ",number[i]);
    }
    return 0;
} 