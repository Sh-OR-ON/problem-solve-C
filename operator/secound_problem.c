#include<stdio.h>
int main(){
    char ch;
    printf("Enter the number: ");
    scanf("%c", &ch);
    switch(ch>='A' && ch<='Z'){
        case 1:
        printf("This is an uppercase number");
        break;
        case 0:
           switch(ch>='a' && ch<='z'){
              case 1:
              printf("This is an lowercase number");
              break;
              case 0:
                switch(ch>='0' && ch<='9'){
                    case 1:
                    printf("This is a digit");
                    break;
                    case 0:
                    printf("This is a special charecter");
                }
           }
    }
    return 0;
}