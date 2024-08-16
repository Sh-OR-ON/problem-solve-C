#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("Enter the two number:");
    scanf("%f %f",&a,&b);
    char ch;
    printf("ENter the oparator:");
    scanf(" %c",&ch);
    switch(ch){
        case '+':
        printf("sum is:%.2f\n",a+b);
        case '-':
         printf("addition is:%.2f\n",a-b);
        case '*':
         printf("Multiplication is:%.2f\n",a*b);
        case '/':
        if(fmod(a, b)==0){  //vaiya error khaisi, a%b nite pare na kaku, kimntu a%2 nite pare, ei time math.h ainna ei khan theke fmod function ene a%b er man ber kora possible//
          printf("Divition is:%.2f\n",a/b);
        }
        else {
            printf("Remainder:%.2f\n", fmod(a, b));
        }

          }

     return 0;
    }
   
   

