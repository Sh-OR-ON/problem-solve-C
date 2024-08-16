#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three number:");
scanf("%d %d %d", &a,&b,&c);
int is_it=0;
if((a=b)<=80 && b>=0){
    is_it=1;
    printf("It is:%d\n",is_it);
}
else{
    is_it=0;
    printf("It is:%d\n",is_it);
}
if((a-b)==0 || c!=0){
    is_it=1;
    printf("It is:%d\n", is_it);
}
else{
    is_it=0;
    printf("It is:%d\n",is_it);
}
if(a != b || ((b < a) && c > 0))
{
    is_it=1;
    printf("It is:%d\n",is_it);
}
else{
    is_it=0;
    printf("It is:%d\n",is_it);
}


return 0;
}