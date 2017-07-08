#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	
	a = a^b;
	// (original a^b)^b = a
	b = a^b;
	// (original a^b)^a = b
	a = b^a;
	
	printf("The first number is now %d.\n", a);
	printf("The second number is now %d.\n", b);
	
	return 0;
}
