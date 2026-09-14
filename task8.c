#include <stdio.h>
int main()
{
	int num1,num2;
	int quotient,reminder;
	 
	 printf("enter num1");
	 scanf("%d",&num1);
	 printf("enter num2");
	 scanf("%d",&num2);
	 
	 quotient= num1/num2;
	 reminder= num1%num2;
	 
	 printf("quotient : %d\n",quotient);
	 printf("reminder :%d\n",reminder);
	 
}
