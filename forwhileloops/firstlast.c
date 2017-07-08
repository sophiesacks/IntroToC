#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int first, last;
	
	last = n % 10;
	
	while(n % 10 != 0)
	{
		first = n;
		n /= 10;
		if(n % 10 == 0 && n / 10 != 0)
		{
			n /= 10;
		}
	}
	
	printf("First Digit: %d\nLast Digit: %d\n", first, last);
	
	return 0;
}

// problem with large integers 
