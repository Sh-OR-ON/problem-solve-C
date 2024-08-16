#include<stdio.h>
void sentence(char *a){ // *a er maddome bujiye dewa hoi j eta chaile string o nite parbe
    puts(a);
}
int main(){
    char str[100];
    printf("Enter your Sentence: ");
    gets(str);
    sentence(str);
    return 0;
}