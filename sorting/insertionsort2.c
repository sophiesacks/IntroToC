#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int elements; 
	printf("Input how many elements should be in the array: ");
	scanf("%d", &elements);
	int array[elements];
	srand(time(NULL));
	printf("The original array: ");
	for(int i = 0; i < 8; i++)
	{
		array[i] = rand() % 100;
		printf("%d ", array[i]);
	}
	printf("\n");
	
	int temp, current, count = 0;
	
	if(array[0] > array[1])
	{
		temp = array[1];
		array[1] = array[0];
		array[0] = temp;
		count++;
	}
	
	for(int i = 2; i < 8; i++)
	{
		temp = array[i];
		current = i - 1;
		while(array[current] > array[i] && current > 0)
		{
			current--;
			count++;
		}
		current++;
		// would be easier to have it switch each time rather than this loop, but works 
		for(int j = i - 1; j >= current; j--)
		{
			array[j + 1] = array[j];
		}
		array[current] = temp;
	}
	
	printf("%d comparisons were made to sort the array using insertion sort.\n", count);
	
	printf("The sorted array: ");
	for(int i = 0; i < 8; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
