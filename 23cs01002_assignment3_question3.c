# include<stdio.h>

int main(){
    int a;
    printf("Enter a positive integer : ");
    scanf("%d", &a);

    int b;
    printf("Enter a positive integer : ");
    scanf("%d", &b);

    int c;
    printf("Enter a positive integer : ");
    scanf("%d", &c);

    if (a + b > c && b + c > a && a + c > b) {
        printf("These three integers can form the sides of a triangle");
    } else {
        printf("These three integers cannot form the sides of a triangle");
    }
}