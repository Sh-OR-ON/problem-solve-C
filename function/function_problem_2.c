#include<stdio.h>
void sentence(char a){
    printf("Value recived from main:%c",a);
}
int main(){
    char input;
    printf("Enter your Sentence: ");
    scanf("%c",&input);
    sentence(input);
    return 0;
}