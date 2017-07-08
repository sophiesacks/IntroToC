#include <stdio.h>

void swap(int *x, int *y, int *z)
{
	int temp1, temp2;
	temp1 = *y;
	temp2 = *z;
	*y = *x;
	*z = temp1;
	*x = temp2;
}

int main(int argc, char *argv[])
{
	int a, b, c;
	printf("Input the value of the first element: ");
	scanf("%d", &a);
	printf("Input the value of the second element: ");
	scanf("%d", &b);
	printf("Input the value of the third element: ");
	scanf("%d", &c);
	
	printf("\nThe values before swapping are:\n");
	printf("element 1: %d\n", a);
	printf("element 2: %d\n", b);
	printf("element 3: %d\n", c);
	
	swap(&a, &b, &c);
	printf("\nThe values after swapping are:\n");
	printf("element 1: %d\n", a);
	printf("element 2: %d\n", b);
	printf("element 3: %d\n", c);
	
	return 0;
}
