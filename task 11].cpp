
#include <stdio.h>

int main()
{
    char type;
    float bill, discount, final;

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    printf("Are you a corporate employee? (Y/N): ");
    scanf(" %c", &type);

    if (type == 'Y' || type == 'y')
    {
        discount = bill * 0.20;
        final = bill - discount;
        printf("20%% discount applied.\n");
    }
    else
    {
        final = bill;
        printf("No discount applied.\n");
    }

    printf("Final Bill = %.2f", final);

    return 0;
}

