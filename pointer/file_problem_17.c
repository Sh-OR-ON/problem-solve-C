#include<stdio.h>
int main(){
    FILE *file;
    char name[20];
    file=fopen("sample.txt","a");
    if(file== NULL){
        printf("File doesn't exist");
    }
    else{
        printf("Enter your name: ");
        scanf("%s",&name);
        fprintf(file,"%s\n",name);
    }
    fclose(file);
    return 0;
}