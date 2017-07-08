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
	printf("Enter a bit to set: ");
	scanf("%d", &pow);
	int bit = power(2, pow);
	
	int set = num|bit;
	printf("The number is now %d.\n", set);
	
	return 0;
}
