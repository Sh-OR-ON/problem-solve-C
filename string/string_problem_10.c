#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100],str_2[100];
    int ch,ch_2,temp;
    printf("Enter your charecter: ");
    gets(str);
    strlwr(str);
    strcpy(str_2,str);
    strrev(str);
    ch=strcmp(str,str_2);// eki type hole ch=0 hobe
    if(ch==0){
        printf("This is palindrom");
    }
    else{
        printf("This is not palindrom");
    }
    return 0;
}
