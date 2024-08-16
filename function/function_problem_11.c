#include<stdio.h>
#include<string.h>
void string(char x[100]){
    int a;
    a=strlen(x);
    printf("Total word in this string:%d",a);
}
int main(){
    char str[100];
    printf("Enter the string number:");
    gets(str);
    string(str);
    return 0;
}