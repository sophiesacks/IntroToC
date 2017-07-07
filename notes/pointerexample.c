#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 2;
	int c = 3; 
	
	int *p;
	int *q;
	
	p = &a; // p is now pointing at 1
	q = &b; // q is not pointing at 2
	
	c = *p;
	p = q; // p and q are pointing at the same thing 
	*p = 13; // puts 13 where p was pointing at and therefore q is pointing at 13 as well
	
	return 0;
}
