# include<stdio.h>

int main() {

    int a;
    printf("enter an integer value for a : ");
    scanf("%d", &a);

    if(a > 0){
        printf("a is positive ");
    }
    else if(a < 0){
        printf("a is negative");
    }
    else {
        printf("a is equals to zero");
    }

return 0;
}