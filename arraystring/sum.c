#include <stdio.h>

int sum(char *arg[])
{
	int sum, num;
	for(int i = 0; arg[i] != '\0'; i++)
	{
		num = atoi(arg[i]);
		sum += num;
	}
	
	return sum;
}

int main(int argc, char *argv[])
{
	printf("%d\n", sum(argv));
	return 0;
}
