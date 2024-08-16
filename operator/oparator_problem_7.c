#include<stdio.h>
int main(){
    int a;
    float b;
    printf("Enter two numbet:");
    scanf("%d %f",&a ,&b);
    printf("%f number to integer number: %d\n",b,(int)b);
    printf("%d number to float number: %f\n", a,(float)a);

    return 0;


}