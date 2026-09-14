#include <stdio.h>

int main() {
    char payment;

    printf("Enter payment status (Y/N): ");
    scanf(" %c", &payment);

    if (payment == 'Y' || payment == 'y') {
        printf("Membership confirmed");
    } else {
        printf("Membership pending");
    }

}
