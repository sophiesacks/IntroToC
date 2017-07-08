#include <stdio.h>

int main(int argc, char *argv[])
{
	int m = 29;
	printf("Address of m: %p\n", &m);
	printf("Value of m: %d\n", m);
	
	int *ab = &m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab: %p\n", ab);
	printf("Content of pointer ab: %d\n", *ab);
	
	m = 34;
	printf("The value of m is assigned to 34.\n");
	printf("Address of pointer ab: %p\n", ab);
	printf("Content of pointer ab: %d\n", *ab);
	
	*ab = 7;
	printf("The pointer variable ab is assigned with the value 7.\n");
	printf("Address of m: %p\n", &m);
	printf("Value of m: %d\n", m);
	
	return 0;
}
