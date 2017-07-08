#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int digits[10];
	int last;
	
	for(int i = 0; i < 10; i++)
	{
		digits[i] = 0;
	}
	
	if(n % 10 == 0)
	{
		digits[0]++;
		n /= 10;
	}
	
	while(n % 10 != 0)
	{
		last = n % 10;
		n /= 10;
		digits[last]++;
		if(n % 10 == 0 && n / 10 != 0)
		{
			digits[0]++;
			n /= 10;
		}
	}
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d appears %d time(s).\n", i, digits[i]);
	}
	
	return 0;
}
