#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100],wrd[20];
    int temp ,i,j,wrdlen,stlen,chkwrd,count=0;
    printf("Enter your string :");
    gets(str);
    printf("Enter counting sentence:");
    gets(wrd);
    wrdlen=strlen(wrd);
    stlen=strlen(str);
    for(int i=0;i<stlen;i++){
        temp=i;
        for(j=0;j<wrdlen;j++){
            if(str[i]==wrd[j]){ // very easy code ekbar matha tanda kore vablei hoye jay//
                i++; // i++ er kela bujte hobe ei khane
            }
            chkwrd=i-temp;
            if(chkwrd==wrdlen){
                count++;
                i=temp;
            }
        }
        i=temp;
    }
    printf("Word number:%d",count);

    return 0;
}