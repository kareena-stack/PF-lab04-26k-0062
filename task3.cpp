#include <stdio.h>

int main()
{
    int plan;

    printf("1. Basic\n");
    printf("2. Premium\n");
    printf("3. VIP\n");
    printf("Enter your choice: ");
    scanf("%d", &plan);

    switch(plan)
    {
        case 1:
            printf("Basic plan selected");
            break;

        case 2:
            printf("Premium plan selected");
            break;

        case 3:
            printf("VIP plan selected");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
