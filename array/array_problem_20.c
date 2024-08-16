#include<stdio.h>
int main(){
    int i,j,k,a,b;
    printf("Enter array 1 size:");
    scanf("%d",&k);
    int number[k];
    printf("Array 1:");
    for(i=0;i<k;i++){
        scanf("%d",&number[i]);
    }
    printf("Enter array 2 size:");
    scanf("%d",&a);
    int number_2[a];
    printf("Array 2:");
    for(j=0;j<a;j++){
        scanf("%d",&number_2[j]);
    }
    printf("Union this 2 array:");
    for(i=0;i<k;i++){
        printf("%d", number[i]);
    }
    for(j = 0; j < a; j++) {
         b = 1;
        for(i = 0; i < k; i++) {
            if(number_2[j] == number[i]) {
                b = 0;
                break;
            }
        }
        if(b==1) {
            printf("%d", number_2[j]);
        }
    }
    
    
    return 0;
}