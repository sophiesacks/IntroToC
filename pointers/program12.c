#include <stdio.h>

int main(int argc, char *argv[])
{
	int num, factorial = 1;
	printf("Input a number: ");
	scanf("%d", &num);
	int *n = &num;
	
	for(int i = *n; i > 0; i--)
	{
		factorial *= i;
	}
	
	printf("The factorial of %d is %d.\n", *n, factorial);
	
	return 0;
}
