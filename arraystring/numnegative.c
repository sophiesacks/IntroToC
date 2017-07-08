#include <stdio.h>

int negative(char *arg[])
{
	int num, count;
	for(int i = 1; arg[i] != '\0'; i++)
	{
		num = atoi(arg[i]);
		if(num < 0)
		{
			count++;
		}
	}
	return count;
}

int main(int argc, char *argv[])
{
	printf("There are %d negative numbers.\n", negative(argv));
	return 0;
}
