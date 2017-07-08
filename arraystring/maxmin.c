#include <stdio.h>
#include <limits.h>

int max(char *arg[])
{
	int num, max = INT_MIN;
	for(int i = 0; arg[i] != '\0'; i++)
	{
		num = atoi(arg[i]);
		if(num > max)
		{
			max = num;
		}
	}
	return max;
}

int min(char *arg[])
{
	int num, min = INT_MAX;
	for(int i = 0; arg[i] != '\0'; i++)
	{
		num = atoi(arg[i]);
		if(num < min)
		{
			min = num;
		}
	}
	return min;
}

int main(int argc, char *argv[])
{
	printf("%d\n", max(argv));
	printf("%d\n", min(argv));
	return 0;
}
