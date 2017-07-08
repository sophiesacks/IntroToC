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
	printf("Enter a bit to check: ");
	scanf("%d", &pow);
	int bit = power(2, pow);
	
	if(num & bit)
	{
		printf("The nth bit is 1.\n");
	}
	else
	{
		printf("The nth bit is 0.\n");
	}
	
	return 0;
}
