#include <stdio.h>

int main(int argc, char *argv[])
{
	int list[] = {4, 5, 2, 88, 72, 46};
	int num, count = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(int i = 0; list[i] != '\0'; i++)
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
	
	return 0;
}
