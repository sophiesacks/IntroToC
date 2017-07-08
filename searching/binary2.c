#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int list[] = {3, 5, 17, 22, 25, 33, 39, 42, 64, 72, 76, 87, 93};
	int num, count = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	int low = 0, high = 13, mid = 13 / 2;
	while(num != list[mid] && count <= log(13)/log(2))
	{
		if(num > list[mid])
		{
			count++;
			low = mid;
			mid = (high + low) / 2;
		}
		else if(num < list[mid])
		{
			count++;
			high = mid;
			mid = (high + low) / 2;
		}
	}
	
	if(count <= log(13)/log(2))
	{
		printf("The number is in the list at location %d.\n", mid);
	}
	else
	{
		printf("The number is not in the list.\n");
	}
	
	return 0;
}
