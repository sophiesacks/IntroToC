#include <stdio.h>

int main(int argc, char *argv[])
{
	int elements;
	printf("Input the number of elements to store in the array: ");
	scanf("%d", &elements);
	
	int array[elements];
	for(int i = 0; i < elements; i++)
	{
		array[i] = 0;
	}
	
	printf("Input %d number of elements in the array:\n", elements);
	for(int i = 0; i < elements; i++)
	{
		int num;
		printf("element %d: ", i);
		scanf("%d", &num);
		array[i] = num;
	}
	
	int *a = array;
	printf("The elements you entered are:\n");
	for(int i = 0; i < elements; i++)
	{
		printf("element %d: %d\n", i, *(a + i));
	}
	
	return 0;
}
