#include <stdio.h>

int main()
{
    int booked, total;

    printf("Enter total slots: ");
    scanf("%d", &total);

    printf("Enter booked slots: ");
    scanf("%d", &booked);

    if (booked < total)
    {
        printf("Slots are available");
    }
    else
    {
        printf("No slots available");
    }

    return 0;
}
