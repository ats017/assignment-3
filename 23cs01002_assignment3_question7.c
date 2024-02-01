#include <stdio.h>

int main() {
    int M, N, K;
    float T;
    char grade;

    printf("Enter the marks obtained (M): ");
    scanf("%d", &M);
    printf("Enter the number of classes attended (N): ");
    scanf("%d", &N);
    printf("Enter the total number of classes conducted (K): ");
    scanf("%d", &K);

    float W = (float)N / K;
    T = M * W;

    if (T >= 90) {
        grade = 'E';
    } else if (T >= 80 && T < 90) {
        grade = 'A';
    } else if (T >= 70 && T < 80) {
        grade = 'B';
    } else if (T >= 60 && T < 70) {
        grade = 'C';
    } else if (T >= 50 && T < 60) {
        grade = 'D';
    } else if (T >= 40 && T < 50) {
        grade = 'P';
    } else {
        grade = 'F';
    }

    printf("Final Score = %.0f\n", T);
    printf("Grade is = %c\n", grade);

    return 0;
}