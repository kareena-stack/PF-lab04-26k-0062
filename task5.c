#include <stdio.h>

int main() {
    char trainer;
    float bill;

    printf("Do you want a personal trainer? (Y/N): ");
    scanf(" %c", &trainer);

    bill = 5000;

    if (trainer == 'Y' || trainer == 'y') {
        bill = bill + 2000;
        printf("Personal trainer added.\n");
    }
    else {
        printf("No personal trainer selected.\n");
    }

    printf("Total Bill = %.2f\n", bill);

    return 0;
}
