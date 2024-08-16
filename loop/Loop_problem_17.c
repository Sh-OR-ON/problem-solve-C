#include<stdio.h>
#include<math.h>
int main(){
    int i,j,a=1,b=0;
    printf("Enter the number:");
    scanf("%d",&j);
    if(j==1){
        printf("This is not a prime number\n"); //1 bad e kono songha sara vag na gele oi ta re not prime bole r jodi vag jay tkn oi ta k prime number bole//
    }
    else{
        for(i=2;i<=10;i++){
            a=(fmod(j,i));
            if(a==0){
                b=1;
            }
        }
        if(b==1){
            printf("This is a prime number\n");
        }
        else{
            printf("This is not a prime number\n");
        }
    }
        
    
    return 0;
}// eta user joto porjonto number dibe tar age porjonto loop er number diye vag kore dekbo  vag jay naki// evabe o solve kora jay//