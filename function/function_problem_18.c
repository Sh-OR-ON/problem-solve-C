#include<stdio.h>
#include<math.h>
void Isprime(int b){
    int d=0;
    for(int i=0;i<b;i++){
        if(fmod(b,i)==0 && i>1){
            d=1;
        }
    }
    if(d==1 || b==1){
            printf("This is not prime number");
        }
        else if(d==0 || b==2){
            printf("This is prime number");
        }
}
int main(){
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
    Isprime(a);
    return 0;
}