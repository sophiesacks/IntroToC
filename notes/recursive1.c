#include <stdio.h>
#include <math.h>

// reverses an array of integers using recursion 

void reverseDisplay(int value[], int index, int size)
{
	int temp = value[index];
	value[index] = value[size-index];
	value[size-index] = temp;
	if(index == size/2)
	{
		return;
	}
	reverseDisplay(value, index + 1, size);
}

void printArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d: %d\n", i, array[i]);
	}
}

int main(int argc, char *argv[])
{
	int size;
	printf("Enter how many elements should be in the array: ");
	scanf("%d", &size);
	int array[size];
	for(int i = 0; i < size; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &array[i]);
	}
	printf("The original array:\n");
	printArray(array, size);
	reverseDisplay(array, 0, size - 1);
	printf("The reversed array:\n");
	printArray(array, size);
	
	return 0;
}
