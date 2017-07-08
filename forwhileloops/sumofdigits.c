#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int sum;
	
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	
	printf("The sum of the digits is %d.\n", sum);
	
	return 0;
}

