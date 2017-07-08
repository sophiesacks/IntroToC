#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int digits;
	
	while(n != 0)
	{
		digits++;
		n /= 10;
	}
	
	printf("There are %d digits.\n", digits);
	
	return 0;
}

// problem with large integers over 9 digits 
