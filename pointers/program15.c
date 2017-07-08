#include <stdio.h>

int * max(int *x, int *y)
{
	int *max;
	if(*x > *y)
	{
		max = x;
	}
	else
	{
		max = y;
	}
	return max;
}

int main(int argc, char *argv[])
{
	int a, b;
	printf("Input the first number: ");
	scanf("%d", &a);
	printf("Input the second number: ");
	scanf("%d", &b);
	
	int *num; 
	num = max(&a, &b);
	printf("The number %d is larger.\n", *num);
	
	return 0;
}
