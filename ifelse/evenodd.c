#include <stdio.h>

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);

	if(num % 2 == 1)
	{
		printf("The number is odd.\n");
	}
	else
	{
		printf("The number is even.\n");
	}

	return 0;
}
