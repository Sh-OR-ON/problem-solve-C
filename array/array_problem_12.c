#include<stdio.h>
int main(){
    int i,j,a,b;
    printf("Enter the number:");
    scanf("%d",&j);
    int number[j];
    for(i=0;i<j;i++){
        printf("Enter number:");
        scanf("%d",&number[i]);
    }
    printf("Enter position: ");
    scanf("%d",&a);
    printf("Enter position number:");
    scanf("%d",&b);
    for(i=j;i>a;i--){
        number[i]=number[i-1]; //eta mainly byujay..array te 5 no. array er jonno 4 no. array te thaka man//
    }
    number[a]=b; // ei position ta dhara bujano jay je eta array te porinoto hoise & eta b dhara etar vitore rakha man bujano hoise//
    printf("Now modifie array is\n");
    for(i=0;i<j+1;i++){
        printf("%d\t",number[i]);
    }
    return 0;
}