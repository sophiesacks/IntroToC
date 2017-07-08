#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int digit;
	
	while(n != 0)
	{
		digit = n % 10;
		printf("%d", digit);
		n /= 10;
	}
	
	printf("\n");
	
	return 0;
}
