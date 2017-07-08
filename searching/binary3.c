#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int elements, num, count = 0;
	printf("Input how many elements should be in the list: ");
	scanf("%d", &elements);
	int list[elements];
	for(int i = 0; i < elements; i++)
	{
		list[i] = 0;
	}
	for(int i = 0; i < elements; i++)
	{
		printf("Enter a number for element %d in ascending order: ", i);
		scanf("%d", &num);
		list[i] = num;
	}
	printf("Enter a number to search for: ");
	scanf("%d", &num);
	
	clock_t begin = clock();
	
	int low = 0, high = elements, mid = elements/2;
	while(num != list[mid] && count <= log(elements)/log(2))
	{
		if(num > list[mid])
		{
			count++;
			low = mid;
			mid = (high + low)/2;
		}
		else if(num < list[mid])
		{
			count++;
			high = mid;
			mid = (high + low)/2;
		}
	}
	
	if(count <= log(elements)/log(2))
	{
		printf("The number is in the list at position %d.\n", mid);
	}
	else
	{
		printf("The number is not in the list.\n");
	}
	
	clock_t end = clock();
	double time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("This program took %lf seconds to run.\n", time);
	
	return 0;
}
