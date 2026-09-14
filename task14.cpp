#include <stdio.h>

int main() {
    int rating;

    printf("Enter rating: ");
    scanf("%d", &rating);

    if (rating >= 4) {
        printf("Free protein shake voucher");
    } else {
        printf("We will improve service");
    }

    return 0;
}
