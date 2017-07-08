#include <stdio.h>

int main(int argc, char *argv[])
{
	int m = 300;
	float fx = 300.600006;
	char ch = 'z';
	
	int *pm = &m;
	float *pfx = &fx;
	char *pch = &ch;
	
	printf("Using & operator:\n");
	printf("address of m: %p\n", &m);
	printf("address of fx: %p\n", &fx);
	printf("address of ch: %p\n\n", &ch);
	
	printf("Using & and * operator:\n\n");
	
	printf("Using only pointer operator:\n");
	printf("address of m: %p\n", pm);
	printf("address of fx: %p\n", pfx);
	printf("address of ch: %p\n\n", pch);
	
	printf("Using only pointer operator:\n");
	printf("value at address of m = %d\n", *pm);
	printf("value at address of fx = %f\n", *pfx);
	printf("value at address of ch = %c\n", *pch);
}
