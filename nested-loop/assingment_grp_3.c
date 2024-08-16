#include <stdio.h>

int main() {
    int a, b, total_credit;
    float c, total_grade_points = 0, total_cgpa;
    printf("Enter your 1st semester credits: ");
    scanf("%d", &a);
    printf("Enter your 1st semester CGPA: ");
    scanf("%f", &c);
    printf("Enter your 2nd semester total courses: ");
    scanf("%d", &b);
    int credit[b];
    float cgpa[b];
    printf("Enter your 2nd semester credit hours:\n");
    for (int i = 0; i < b; i++) {
        printf("Course %d credit: ", i + 1);
        scanf("%d", &credit[i]);
    }
    printf("Enter your 2nd semester CGPAs:\n");
    for (int i = 0; i < b; i++) {
        printf("Course %d CGPA: ", i + 1);
        scanf("%f", &cgpa[i]);
    }
    total_grade_points += c * a;
    total_credit = a;
    for (int i = 0; i < b; i++) {
        total_grade_points += credit[i] * cgpa[i];
        total_credit += credit[i];
    }
    total_cgpa = total_grade_points / total_credit;
    printf("Total CGPA: %.2f\n", total_cgpa);
    
    return 0;
}