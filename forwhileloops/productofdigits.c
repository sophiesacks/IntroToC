#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int product = 1;
	
	while(n != 0)
	{
		product *= n % 10;
		n /= 10;
	}
	
	printf("The product of the digits is %d.\n", product);
	
	return 0;
}

