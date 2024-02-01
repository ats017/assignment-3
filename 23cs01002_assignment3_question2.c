# include<stdio.h>

int main(){
    int a;
    printf("Enter an integer : ");
    scanf("%d", &a);

    int b;
    printf("Enter an integer : ");
    scanf("%d", &b);

    int c;
    printf("Enter an integer : ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("%d is the largest integer.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest integer.\n", b);
    } else {
        printf("%d is the largest integer.\n", c);
    }

return 0;
}