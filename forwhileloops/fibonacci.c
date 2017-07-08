#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int first, second = 1, sum;
	
	if(n < 2)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", first);
		for(int i = 2; i < n; i++)
		{
			printf("%d\n", second);
			sum = first + second;
			first = second;
			second = sum;
		}
	}
	
	return 0;
}
