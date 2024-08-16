#include<stdio.h>
#include<string.h>
#include<ctype.h> //eta ekta ekta songkha pass korar library function//
int main(){
    int i;
    char ch;
    char str[100];
    printf("Enter charecter:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if('A'<=str[i] && 'Z'>=str[i]){
            ch=tolower(str[i]); // ekta ekta songkha pass hole strlwr esob use kora jay na//
            putchar(ch);
        }
        else if('a'<= str[i] && str[i]<='z'){
            ch=toupper(str[i]);
            putchar(ch);
        }
        else{
            printf(" ");
        }
    }
    return 0;
}