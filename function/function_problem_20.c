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
    int count=0;
    int num=2;
    int last_prime =2;
    while(count<c){
        if(isprime(num)){
            last_prime=num;
            count++;
        }
        num++;
    }
    printf("%d prime number is: %d",c,last_prime);
}

int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    genarateprime(a);
    return 0;
}