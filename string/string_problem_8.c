#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int ch,ch_2,temp;
    printf("Enter your charecter: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]> str[j]){ //charecter type e o boro hater choto hate r buje jay pera hoi na//
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
               
            }
        }
    }
    for(int i=0;str[i]!='\0';i++){
        putchar(str[i]);
    }
    return 0;
}