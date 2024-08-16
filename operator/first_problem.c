#include<stdio.h>
int main(){
    char ch;
    printf("Enter the nunber or digit:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("This is an uppercase letter");
    }
    else if(ch>='a'&& ch<='z'){
        printf("This is an lowercase number");
    }
    // ei int er line ta hobe na qz ei khane direct int nile deka jaitese j special charecter dhorte pare na,...special charecter k digit count kore fele//
     int a= (int)ch; 
    if(a >= 0){
        printf("This is a digit");
    }
    else {
        printf("This is an special number");

    }
    return 0;
}