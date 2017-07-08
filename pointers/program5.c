#include <stdio.h>

int sum(int *x, int *y)
{
	int sum = *x + *y;
	return sum;
}

int main(int argc, char *argv[])
{
	int a, b;
	printf("Input the first number: ");
	scanf("%d", &a);
	printf("Input the second number: ");
	scanf("%d", &b);
	
	printf("The sum of %d and %d is %d.\n", a, b, sum(&a, &b));
	return 0;
}
