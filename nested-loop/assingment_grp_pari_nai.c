#include<stdio.h>
int main(){
    int a,i,j,n,d=0,k,total_credit;
    float b,e=0,f,v=0,total_cgpa,t=0;
    printf("Enter your 1st semester credits:");
    scanf("%d",&a);
    printf("Enter your 1st semester CGPA:");
    scanf("%f",&b);
    printf("Enter your 2nd semester total course:");
    scanf("%d",&j);
    int credit[j];
    float cgpa[j];
    printf("Enter your 2nd semester credit hour:\n");
    for(i=1;i<=j;i++){
        printf("%d course credit:",i);
        scanf("%d",&credit[i]);
        d+=credit[i];
    }
    for(n=1;n<=j;n++){
        printf("%d course CGPA:",n);
        scanf("%f",&cgpa[n]); //vul jaite pare//
        e+=cgpa[n];
    }
    for(k=1;k<=j;k++){
        i=k;
        n=k;
        f=credit[i]*cgpa[n];
        v+=f;

    }
    total_credit=a+d;
    total_cgpa=v+b;
    t=total_cgpa/total_credit;
    printf("Total CGPA:%.2f",t);
    return 0;

}