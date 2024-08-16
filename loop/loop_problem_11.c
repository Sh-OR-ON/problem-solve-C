#include<stdio.h>
#include<math.h>
int main(){
    int i,j,a=1,b,c=0; //Loop er baire kono man ber korbo jeta loop er maddome ber hobe ei time e loop er baire variable er ekta man dhore nite hoi....trpr seta baire declear kora jay//
    printf("Entr the seriees last number:");
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        a++;
        b=(i*i)*a;
        c+=b;
    }
    printf("Total number is:%d",c);

    return 0;
}