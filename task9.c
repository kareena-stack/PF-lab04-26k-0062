#include <stdio.h>

int main()
{
    int choice;

    printf("Supplement Menu\n");
    printf("1. Protein\n");
    printf("2. Creatine\n");
    printf("3. BCAA\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Protein selected");
            break;

        case 2:
            printf("Creatine selected");
            break;

        case 3:
            printf("BCAA selected");
            break;

        default:
            printf("Error: Invalid choice");
    }

    return 0;
}
