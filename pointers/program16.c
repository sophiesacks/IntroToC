#include <stdio.h>

int main(int argc, char *argv[])
{
	int elements, sum = 0;
	printf("Input the number of elements to put in the array (max 10): ");
	scanf("%d", &elements);
	int array[elements];
	int *a = array;
	for(int i = 0; i < elements; i++)
	{
		*(a + i) = 0;
	}
	
	printf("Input %d elements in the array:\n", elements);
	for(int i = 1; i <= elements; i++)
	{
		printf("element %d: ", i);
		scanf("%d", (a + i - 1));
	}
	
	for(int i = 0; i < elements; i++)
	{
		sum += *(a + i);
	}
	
	printf("The sum of the array is %d.\n", sum);
	
	return 0;
}
