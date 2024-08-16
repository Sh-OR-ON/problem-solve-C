#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
char find_substr(char x[100],char x_2[100]){
    int d,e,temp=1;
    d=strlen(x);
    e=strlen(x_2);
    if(d<e){
        return false;
    }
    for (int i = 0; i <= d - e; i++) {
        int j;
        for (j = 0; j < e; j++) {
            if (x[i + j] != x_2[j]) { // ei jaygar loop ta joss ekbar matha use korlei ber kora jay
                break;
            }
        }
        if (j == e) {
            return true;
        }
    }
    return false;
}
int main(){
    char str[100],str_2[100];
    printf("Enter your 1st string: ");
    gets(str);
    printf("Enter your 2nd string: ");
    gets(str_2);
    if(find_substr(str,str_2)){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}