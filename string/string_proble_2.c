#include<stdio.h>
#include<stdio.h>
int main(){
    char str[100],str_2[100];
    printf("Enter the charecter:");
    gets(str);
    printf("Enter the charecter:");
    gets(str_2);
    strcat(str,str_2); // 2 ta lekha k ek sate korte ei function use hoi, protom call e bujay etar sate 2nd call er ta jukto hobe, pore puts(1st call) lekhle e print hoye jay//
    puts(str); // string e printf er bodole puts use kora hoi//
    return 0;
}