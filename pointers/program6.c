#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	printf("Input the first number: ");
	scanf("%d", &a);
	printf("Input the second number: ");
	scanf("%d", &b);
	
	int *p = &a;
	int *q = &b;
	
	if(*p > *q)
	{
		printf("%d is the maximum number.\n", *p);
	}
	else
	{
		printf("%d is the maximum number.\n", *q);
	}
	
	return 0;
}
