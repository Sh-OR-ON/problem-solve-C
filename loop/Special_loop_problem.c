#include<stdio.h>
int main(){
    int i,j,a,b,c;
    printf("Enter the number:");
    scanf("%d",&j);
    for(i=0;i<j;i++){
        if(i==0){
            printf("%d\t",i+1);
        }
        else if(i==1){
            a=3+i;
            printf("%d\t",a);
        }
        else if(i>1){
            a=i*i;
            b=3+i+a;
            if(b<10){
                printf("%d\t",b);
            }
            else if(b>10){
                c++;
                b+=c;
                printf("%d\t",b);

            }
        }
    }
    return 0;
}//etar sohoj version ta special loop 2//