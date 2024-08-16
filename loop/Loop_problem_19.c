#include <stdio.h>
#include<math.h>
int main() {
    int i,n,a=1,b=1;
    float j,sum=0;
    printf("Enter your x number:");
    scanf("%d",&n);
    for (i = 1; i <= 15; i += 2) {  
        j = pow(n, i) / b;         
        sum += j * a;               
        a *= -1;                    
        b *= (i + 1) * (i + 2);
    }
    
    printf("Total number: %f\n", sum); 

    return 0;
}
// code ta theke onek notun jinis sikha gese//
