#include<stdio.h>

int main() {
    int i, j, a,b,c,temp;
    printf("Enter the Array A size: ");
    scanf("%d", &j);
    printf("Enter the Array B size: ");
    scanf("%d", &a);

    int number[j], number_2[a],number_3[b];
    for (i = 0; i < j; i++) {
        printf("Enter the number for Array A[%d]: ", i);
        scanf("%d", &number[i]);
    }
    for (i = 0; i < a; i++) {
        printf("Enter the number for Array B[%d]: ", i);
        scanf("%d", &number_2[i]);
    }
    printf("Now revarse the array\n");
    printf("Array A:");
     for (i = 0; i < a; i++) {
        printf(" %d ",number_2[i]);
    }
    printf("\nArray B:");
     for (i = 0; i < j; i++) {
        printf(" %d ",number[i]);
    }
    return 0;
}  // direct array call kore array lekha jay na//
//array ek ek ta number index call kore rekhte hoi tai ei khane loop onivarjo//
//