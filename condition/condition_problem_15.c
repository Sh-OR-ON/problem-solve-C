#include<stdio.h>
int main(){
    int a;
    printf("First man choice a integer number:");
    scanf("%d",&a);
    printf("\n Scound man you can choice this number 3 time\n ");
    int b;
    printf("Enter 1st number:");
    scanf("%d",&b);
    if(a==b){
        printf("congress 2nd player you won the game\n");
    }
    else{
        printf("Now you have only two chance\n");

    }
    printf("Enter 2nd time choice number:");
    scanf("%d", &b);
    if(a==b){
        printf("congress 2nd player you won the game\n");
    }
    else{
        printf("Now you have only one chance\n");

    }
    printf("Enter 3rd time choice number:");
    scanf("%d", &b);
     if(a==b){
        printf("congress 2nd player you won the game\n");
    }
    else{
        printf("Sorry bro!! 2nd player you can't won the game\n congreess 1st player you won the game\n");

    }
    


    return 0;
}