#include<stdio.h>
int main(){
    int i,j,a=0;
    printf("Enter the number:");
    scanf("%d",&j);
    char number[j]; // a,b,c,d esob number newar jonno array ta re char e rakhte hoi//
    for (i = 0; i < j; i++) {
        printf("Enter a character: ");
        scanf(" %c",&number[i]);
    }
    for(i=0;i<j;i++){
        if(number[i]=='a'||number[i]=='e'||number[i]=='i'||number[i]=='o'||number[i]=='u'){
            a++;
        }
    }
    printf("Total vowel number:%d",a);

    return 0;
}