#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int divide = 2;
	
	while(n % divide != 0)
	{
		divide++;
	}
	
	if(divide < n)
	{
		printf("The number is not prime.\n");
	}
	else
	{
		printf("The number is prime.\n");
	}
	
	return 0;
}
