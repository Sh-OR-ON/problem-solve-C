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

    //count total area
    float result[3];
    printf("Print total area\n");
    for(int i=1;i<=3;i++){
        result[i]=(area[i].base*area[i].height)/2.0;
    }

    //find max area
    if((result[1]>result[2]) && (result[1]>result[3])){
        printf("Area=%.2f",result[1]);
    }
    else if((result[2]>result[1]) && (result[2]>result[3])){
        printf("Area=%.2f",result[2]);
    }
    else{
        printf("Area=%.2f",result[3]);
    }


    return 0;
}