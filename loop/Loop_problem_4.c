#include<stdio.h>
int main(){
    float i,j,a,sum;
    printf("Enter your number:");
    scanf("%f", &j);
    for(i=1;i<=j;i++){ //loop er vitore int i niye suru korle oi ta loop er vitorei ses hoye jay eta sob somoy mathay rakhte hobe//
        printf("Enter the number:");
        scanf("%f",&a);
        sum+=a;
    }
    printf("Avarage:%.2f", sum/j);
        return 0;
}