#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int first, last, sum;
	
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
	
	sum = first + last;
	printf("The sum is %d.\n", sum);
	
	return 0;
}
