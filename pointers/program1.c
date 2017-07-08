#include <stdio.h>

int main(int argc, char *argv[])
{
	int m = 10;
	int *z = &m;
	int n = 1;
	int o = 2;
	
	printf("z stores the address of m = %p\n", z);
	printf("*z stores the value of m = %d\n", *z);
	printf("&m is the address of m = %p\n", &m);
	printf("&n is the address of n = %p\n", &n);
	printf("&o is the address of o = %p\n", &o);
	printf("&z is the address of z = %p\n", &z);
	
	return 0;
}
