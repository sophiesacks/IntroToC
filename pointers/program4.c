#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2, sum;
	printf("Input the first number: ");
	scanf("%d", &num1);
	printf("Input the second number: ");
	scanf("%d", &num2);
	
	int *n1 = &num1;
	int *n2 = &num2;
	sum = *n1 + *n2;
	
	printf("The sum of %d and %d is %d.\n", *n1, *n2, sum);
	
	return 0;
}
