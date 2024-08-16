#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the name:");
    gets(str);
    strupr(str); //lower case korte chaile strlwr use korlei hoye jabe//
    puts(str);
    return 0;
}