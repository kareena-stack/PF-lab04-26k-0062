#include <stdio.h>
int main()
{
	char city [50];
	char country [50];
	int population;
	float area;
	char grade;
	
	printf("enter your city");
	scanf(" %s",city);
	printf("enter your country");
	scanf(" %s",country);
	printf("enter population");
	scanf(" %d",&population);
	printf("enter area");
	scanf("%f",&area);
	printf("enter grade");
	scanf(" %c",&grade);
	printf("\nYou live in %s, %s.\n", city, country);
    printf("Population: %d\n", population);
    printf("Area: %f\n", area);
    printf("Grade: %c\n", grade);
	
}
