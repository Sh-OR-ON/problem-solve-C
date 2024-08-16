#include<stdio.h>
int main(){
    float a;
    printf("Enter the number:");
    scanf("%f", &a);
    if (a>=90 && a<=100){
        printf("You got A");
    }
    else if(a>=86 && a<=89){
        printf("You got A-");
    }
    else if(a>=82 && a<=85){
        printf("You got B+");
    }
    else if(a>=78 && a<=81){
        printf("You got B");
    }
    else if(a>=74 && a<=77){
        printf("You got B-");
    }
    else if(a>=70 && a<=73){
        printf("You got C+");
    }
    else if(a>=66 && a<=69){
        printf("You got C");
    }
    else if(a>=62 && a<=65){
        printf("You got C-");
    }
    else if(a>=58 && a<=61){
        printf("You got D+");
    }
    else if(a>=55 && a<=57){
        printf("You got D");
    }
    else if(a<55){
        printf("You are fail");
    }
    return 0;
}