#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b = 1;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	if(a & b)
	{
		printf("The number is odd.\n");
	}
	else
	{
		printf("The number is even.\n");
	}
	
	return 0;
}
