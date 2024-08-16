#include<stdio.h>
#include<string.h>
int main(){
    int a=0,b=0;
    char str[100];
    printf("Enter the number:");
    gets(str);
    for(int i=0;i<100;i++){
        if(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U'){
            a++;
        }
        }
        if(str[i]=='\0'){ // eta na lekhle pore null charectr pete thake r loop cholte thake tai tokon besi result aisa pore//
            break;
        }
    }
    printf("Total vowel: %d",a);
    return 0;
}