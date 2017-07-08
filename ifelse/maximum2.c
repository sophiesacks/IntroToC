#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int num3 = atoi(argv[3]);

	if(num1 > num2 && num1 > num3)
	{
		printf("The maximum is: %d.\n", num1);
	}
	else if (num1 == num2 && num1 == num3)
	{
		printf("The numbers are equal.\n");
	}
	else if(num2 > num1 && num2 > num3)
	{
		printf("The maximum is: %d.\n", num2);
	}
	else
	{
		printf("The maximum is: %d.\n", num3);
	}

	return 0;
}

