#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int power = atoi(argv[2]);
	int final = n;
	
	if(power == 0)
	{
		final = 1;
	}
	else
	{
		for(int i = 0; i < power - 1; i++)
		{
			final *= n;
		}
	}
	
	printf("%d\n", final);
	
	return 0;
}
