#include <stdio.h>
#include <limits.h>

int second_largest(char *arg[])
{
	int num, last = INT_MIN, max = INT_MIN;
	for(int i = 0; arg[i] != '\0'; i++)
	{
		num = atoi(arg[i]);
		if(num > max)
		{
			last = max;
			max = num;
		}
		if(num > last && num < max)
		{
			last = num;
		}
	}
	return last;
}

int main(int argc, char *argv[])
{
	printf("%d\n", second_largest(argv));
	return 0;
}
