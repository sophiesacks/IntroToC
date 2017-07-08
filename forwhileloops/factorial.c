#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int final = n;
	
	for(int i = n - 1; i > 0; i--)
	{
		final *= i;
	}
	
	printf("%d\n", final);
	
	return 0;
}
