#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int ch=0;
    printf("Enter your charecter: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]<='9' && str[i]>='0'){
           ch++;
        }
    }    
    printf("Total number : %d",ch);
    return 0;
}
