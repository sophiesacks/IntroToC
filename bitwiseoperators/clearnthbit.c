#include <stdio.h>

int power(int num, int pow)
{
	int answer = 1;
	for(int i = 0; i < pow; i++)
	{
		answer *= num;
	}
	return answer;
}

int main(int argc, char *argv[])
{
	int num, pow;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter a bit to clear: ");
	scanf("%d", &pow);
	int bit = power(2, pow);
	
	int clear;
	if(num & bit)
	{
		clear = num^bit;
		printf("The number is now %d.\n", clear);
	}
	else
	{
		printf("The number is still %d.\n", num);
	}
	
	return 0;
}
