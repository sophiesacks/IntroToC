#include <stdio.h>

int main(int argc, char *argv[])
{
	int elements;
	printf("Input the number of elements to store in the array (max 15): ");
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
	
	printf("The elements of the array in reverse order are:\n");
	for(int i = elements; i > 0; i--)
	{
		printf("element %d: %d\n", i, *(a + i - 1));
	}
	
	return 0;
}
