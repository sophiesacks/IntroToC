#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	
	printf("The prime factors are:\n1\n");
	
	for(int i = 2; i <= n; i++)
	{
		int divide = 2;
		while(i % divide != 0)
		{
			divide++;
		}
		if(n % i == 0 && (divide == i && i != 2))
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
