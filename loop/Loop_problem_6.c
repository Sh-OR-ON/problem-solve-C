#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("1st player: Enter your number:");
    scanf("%d",&a);
    printf("1st person: Enter choice time:");
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        printf("2nd player : enter your number:");
        scanf("%d",&b);
        if(a==b){
            printf("player 2 is win\n");
            break;
        }
        else if(a!=b && j-i!=0){
            printf("You have %d time left\n",j-i);
        }
        else{
            printf("1st player is win\n");
        }

    }

    return 0;

}