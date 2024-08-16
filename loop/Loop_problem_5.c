#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    printf("Enter two number");
    scanf("%d %d", &i, &j);
    if(i>j){
         for(i=i;i>=j;i--){ // loop e besir vag time e condition e i ==0 emon use kora jay na emon use korle deka jay j loop ta infinity hoye jay pray time ei//
        if(i==j){
            printf("Reached\n");
        }
        else{printf("%d\t", i*i);
        }

        
    }
    }
    else if(i<j){
    for(i=i;i<=j;i++){
        if(i==j){
            printf("Reached\n");
        }
        else{printf("%d\t", i*i);
        }

        
    }
}

    return 0;
}