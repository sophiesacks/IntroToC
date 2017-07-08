#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void selectionsort(int array[], int elements)
{
	int temp, place, count = 0, min = INT_MAX;
	for(int i = 0; i < elements; i++)
	{
		for(int j = i; j < elements; j++)
		{
			if(array[j] < min)
			{
				min = array[j];
				place = j;
				count++;
			}
		}
		temp = array[i];
		array[i] = min;
		array[place] = temp;
		min = INT_MAX;
	}
	printf("%d comparisons were made to sort the array using selection sort.\n", count);
}

int main(int argc, char *argv[])
{
	int elements;
	printf("Input how many elements should be in the array: ");
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
	
	selectionsort(array, elements);
	
	printf("The sorted array: ");
	for(int i = 0; i < elements; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
