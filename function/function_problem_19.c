#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isprime(int b){
    if(b<=1){
        return false;
    }
    else if(b==2){
        return true;
    }
    else{
        for(int i=2;i<b;i++){
            if(fmod(b,i)==0){
                return false;
            }
        }
    }
    return true;
}

void genarateprime(int c){
    printf("prime less then %d: ",c);
    for(int i=1;i<c;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }
}

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    genarateprime(a);
    return 0;
}