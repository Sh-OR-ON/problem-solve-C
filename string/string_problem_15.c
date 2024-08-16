#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100],str_2[100];
    printf("Enter the string number:");
    gets(str);
    int i,len,wrdstr,wrdend,index;
    len=strlen(str);
    index=0;
    wrdstr=len-1;
    wrdend=len-1;
    while(wrdstr>0){ //My name is andy diye khata kolom e vablei ei problem solve kora possible
        if(str[wrdstr]==' '){
            i=wrdstr+1;
            while(i<=wrdend){
                str_2[index]=str[i];
                i++;
                index++;
            }
            str_2[index++]=' ';
            wrdend=wrdstr-1;
        }
        wrdstr--;
    }
    for(i=0;i<=wrdend;i++){
        str_2[index]=str[i];
        index++;
    }
    puts(str_2);
    return 0;
}