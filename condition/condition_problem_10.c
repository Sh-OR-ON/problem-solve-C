#include<stdio.h>
int main(){
    int a,b,c;
    char ch;
    printf("Enter two number:");
    scanf("%d %d",&a, &b);
    printf("Enter the oparator:");
    scanf(" %c", &ch); // problem korsilam vai %c er age gap rakhte hobe //
    if(ch=='+'){
        c=(a+b);
        printf("Total:%d",c);
    }
    else if(ch=='-'){
        c=(a-b);
        printf("Total:%d",c);
    }
    else if(ch=='*'){
        c=(a*b);
        printf("Total:%d",c);
    }
    else if(ch=='/'){
        c=(a/b);
        printf("Total:%d",c);
    }
    else{
        printf("this is not valid\n");
    }
    return 0;
}