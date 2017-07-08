#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	
	printf("The factors are:\n");
	
	for(int divide = 1; divide <= n; divide++)
	{
		if(n % divide == 0)
		{
			printf("%d\n", divide);
		}
	}
	
	return 0;
}

