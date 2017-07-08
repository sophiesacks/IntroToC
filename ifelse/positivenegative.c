#include <stdio.h>

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);

	if(num > 0)
	{
		printf("The number is positive.\n");
	}
	else if(num < 0)
	{
		printf("The number is negative.\n");
	}
	else
	{
		printf("The number is zero.\n");
	}
	
	return 0;
}
