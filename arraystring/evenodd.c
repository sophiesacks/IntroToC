#include <stdio.h>

int even(char *arg[])
{
	int count, num;
	for(int i = 1; arg[i] != '\0'; i++)
	{
		num = atoi(arg[i]);
		if(num % 2 == 0)
		{
			count++;
		}
	}
	return count;
}

int odd(char *arg[])
{
	int count, num;
	for(int i = 1; arg[i] != '\0'; i++)
	{
		num = atoi(arg[i]);
		if(num % 2 == 1)
		{
			count++;
		}
	}
	return count; 
}

int main(int argc, char *argv[])
{
	printf("There are %d even numbers.\n", even(argv));
	printf("There are %d odd numbers.\n", odd(argv));
	return 0;
}
