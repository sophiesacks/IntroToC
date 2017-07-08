#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b = 1;
	printf("Enter a positive number: ");
	scanf("%d", &a);
	
	if(a & b)
	{
		printf("The least significant bit is set (equal to 1).\n");
	}
	else
	{
		printf("The least significant bit is not set (not equal to 1).\n");
	}
	
	return 0;
}
