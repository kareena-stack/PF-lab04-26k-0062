#include <stdio.h>

int main()
{
    int month;
    float price, discount, final;

    printf("Enter number of month: ");
    scanf("%d", &months);

    printf("Enter membership price: ");
    scanf("%f", &price);

    if (months >= 6)
    {
        discount = price * 0.10;
        final = price - discount;
        printf("10%% discount applied.\n");
    }
    else
    {
        final = price;
        printf("Normal price.\n");
    }

    printf("Final Price = %.2f", final);

    return 0;
}
