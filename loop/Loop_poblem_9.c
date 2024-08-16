#include <stdio.h>
int main(){
    int a;
    float b,c,d,e,f;
    printf("Enter student number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("Student number(A,HW,CT,MT,TF):");
        scanf("%f %f %f %f %f",&b,&c,&d,&e,&f);
        float j = (((b*5/5)) + ((c*10)/10) + ((d*15)/15) + ((e*30)/50) + ((f*40)/100)); // ei khane math metical kono mayube vul tul ase//
        if(j>=90 && j<=100){
            printf("Grade student %d :A\n",i);
        }
        else if(j>=86 && j<=89){
            printf("Grade student %d:A-\n",i);
        }
        else if(j>=82 && j<=85){
            printf("Grade student %d:B+\n",i);
        }
        else if(j>=78 && j<=81){
            printf("Grade student %d:B\n",i);
        }
        else if(j>=74 && j<=77){
            printf("Grade student %d:B-\n",i);
        }
        else if(j>=70 && j<=73){
            printf("Grade student %d:C+\n",i);
        }
        else if(j>=66 && j<=69){
            printf("Grade student %d:C\n",i);
        }
        else if(j>=62 && j<=65){
            printf("Grade student %d:C-\n",i);
        }
        else if(j>=58 && j<=61){
            printf("Grade student %d:D+\n",i);
        }
        else if(j>=57 && j<=55){
            printf("Grade student %d:D\n",i);
        }
        else{
             printf("Grade student %d:F\n",i);
        }
    }

    return 0;
}

/*int main(){
    float b,c,d,e,f;
    scanf("%f %f %f %f %f",&b,&c,&d,&e,&f);
    float j = ((5/100)*b) + ((10/100)*c) + ((15/100)*d) + ((30/100)*e) + ((40/100)*f);
    printf("%f",j);

}*/