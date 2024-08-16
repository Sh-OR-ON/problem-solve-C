#include<stdio.h>
#include<string.h>
struct area{
    int base,height;
};
int main(){
    struct area area[3];
    //area input


    for(int i=1;i<=3;i++){
        printf("Enter Information of area %d\n",i);
        printf("Enter your base %d: ",i);
        scanf("%d",&area[i].base);
        printf("Enter your height %d: ",i);
        scanf("%d",&area[i].height);

    }

    //print total area
    printf("Print total area\n");
    for(int i=1;i<=3;i++){
        printf("Area %d : %.2f\n",i,(area[i].base*area[i].height)/2.0);
    }
    return 0;
}