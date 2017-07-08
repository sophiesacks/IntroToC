#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int gcf;
	
	if(num1 < num2)
	{
		for(int i = 1; i <= num1; i++)
		{
			if(num1 % i == 0 && num2 % i == 0)
			{
				gcf = i;
			}
		}
	}
	else
	{
		for(int i = 1; i <= num2; i++)
		{
			if(num1 % i == 0 && num2 % i == 0)
			{
				gcf = i;
			}
		}
	}
	
	printf("The greatest common factor is %d.\n", gcf);
	
	return 0;
}
