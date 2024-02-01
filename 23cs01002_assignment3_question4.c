#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    printf(" Enter the values of x1 : ");
    scanf("%f", &x1);
    printf(" Enter the values of y1 : ");
    scanf("%f", &y1);
    printf(" Enter the values of x2 : ");
    scanf("%f", &x2);
    printf(" Enter the values of y2 : ");
    scanf("%f", &y2);
    printf(" Enter the values of x3 : ");
    scanf("%f", &x3);
    printf(" Enter the values of y3 : ");
    scanf("%f", &y3);

    float slope1 = (y2 - y1)/(x2 -x1);
    float slope2 = (y3 - y2)/(x3 -x2);

    if ( slope1 == slope2) {
        printf("all the points lie in a straight line");
    }
    else {
        printf("all the points does not lie in a straight line");
    }

return 0;
}