#include <stdio.h>

int main()
{
	int a = 4;
	int b = 8;
	
	printf("a = %d, b = %d\n", a, b);
	// bitwise and (&) - both must be true (1 in binary)
	printf("a & b = %d\n", a&b);
	// bitwise or (|) - only one must be true (1 in binary), both can be true as well
	printf("a | b = %d\n", a|b);
	// bitwise exclusive or (^) - one and only one must be true (1 in binary)
	printf("a ^ b = %d\n", a^b);
	// bitwise not (~) - should flip bits (change 1s to 0s and 0s to 1s)
	printf("~a = %d\n", ~a);
	// shifts all bits 1 to the left, essentially multiplying by 2
	printf("b << 1 = %d\n", b<<1);
	// shifts all bits 1 to the right, essentially dividing by 2
	printf("b >> 1 = %d\n", b>>1);
}
