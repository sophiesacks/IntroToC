#include <stdio.h>
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
		printf("Enter a number for element %d: ", i);
		scanf("%d", &num);
		list[i] = num;
	}
	
	printf("Enter a number to see if it is in the list: ");
	scanf("%d", &num);
	
	clock_t begin = clock();
	
	for(int i = 0; i < elements; i++)
	{
		if(num == list[i])
		{
			printf("The number is in the list.\n");
			count++;
		}
	}
	if(count == 0)
	{
		printf("The number is not in the list.\n");
	}
	
	clock_t end = clock();
	double time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("The program took %lf seconds to run.\n", time);
	
	return 0;
}
