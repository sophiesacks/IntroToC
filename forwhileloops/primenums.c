#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	
	printf("1\n");
	
	for(int i = 3; i <= n; i++)
	{
		int divide = 2;
		while(i % divide != 0)
		{
			divide++;
		}
		if(divide == i)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
