#include <stdio.h>
#include <stdlib.h>

void bubblesort(int array[], int elements)
{
	int temp, count = 0;
	for(int i = 0; i < elements; i++)
	{
		for(int j = 0; j < elements - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				count++;
			}
		}
	}
	printf("%d comparisons were made to sort the array using bubble sort.\n", count);
}

int main(int argc, char *argv[])
{
	int elements;
	printf("Input how many elements to be in the array: ");
	scanf("%d", &elements);
	int array[elements];
	srand(time(NULL));
	printf("The original array: ");
	for(int i = 0; i < elements; i++)
	{
		array[i] = rand() % 101;
		printf("%d ", array[i]);
	}
	printf("\n");
	
	bubblesort(array, elements);
	
	printf("The sorted array: ");
	for(int i = 0; i < elements; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
