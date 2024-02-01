#include <stdio.h>

int main() {
    int daysLate;
    printf("Enter the number of days late to return the book: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        printf("No fine. You returned the book on time.\n");
    } else if (daysLate <= 5) {
        printf("Fine: 1 rupee.\n");
    } else if (daysLate <= 10) {
        printf("Fine: 2 rupees.\n");
    } else if (daysLate <= 30) {
        printf("Fine: 5 rupees.\n");
    } else {
        printf("Your membership is canceled. You returned the book after 30 days.\n");
    }

    return 0;
}