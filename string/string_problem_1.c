#include<stdio.h>
int main(){
    int i;
    char str[100];//string always char er e hoi//
    printf("Enter charecter:");
    gets(str); //scanf er bodole char & signature ei khane use kora jay na//
    for(i=0;i<100;i++){
        if(str[i]=='\0'){ // '\0' eta hocce null charecter //
            printf("Lenth of the charecter:%d",i);
            break; //noito eta tana choltei thakbe, qz null charecter astei thakbe//
        }
    }
    return 0;
}