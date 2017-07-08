#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	
	// shift it 31 times (32nd bit is sign)
	int b = 1 << (sizeof(int)*8 - 1);
	
	if(a & b)
	{
		printf("The most significant bit is set (equal to 1).\n");
	}
	else
	{
		printf("The most significant bit is not set (not equal to 1).\n");
	}
	
	return 0;
}
