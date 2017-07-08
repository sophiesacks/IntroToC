#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2;
	printf("Enter a value: ");
	scanf("%d", &num1);

	printf("Enter another value: ");
	scanf("%d", &num2);

	if(num1 > num2)
	{
		printf("The maximum is: %d.\n", num1);
	}
	else if (num1 == num2)
	{
		printf("The numbers are equal.\n");
	}
	else 
	{
		printf("The maximum is: %d.\n", num2); 
	}

	return 0;
}

