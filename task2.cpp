#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 16)
    {
        printf("Membership allowed");
    }
    else
    {
        printf("Membership denied");
    }

    return 0;
}
