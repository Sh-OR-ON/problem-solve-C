#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int ch=0;
    char ch_2,b;
    printf("Enter your charecter: ");
    gets(str);
    printf("Enter your search number: ");
    scanf("%c",&ch_2);
    for(int i=0;str[i]!='\0';i++){
        b=tolower(str[i]); //b lekhtei hoi ei khane noito error dekay//
        if(b==ch_2){
           ch++;
        }
    }    
    printf("Total %c : %d",ch_2,ch);
    return 0;
}