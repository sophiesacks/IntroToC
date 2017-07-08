#include <stdio.h>

int main(int argc, char *argv[])
{
	char string[] = "Hello world! 123";
	int frequency[3];
	for(int i = 0; i < 3; i++)
	{
		frequency[i] = 0;
	}
	
	for(int i = 0; string[i] != '\0'; i++)
	{
		if(string[i] >= 65 && string[i] <= 90)
		{
			frequency[0]++;
		}
		else if(string[i] >= 97 && string[i] <= 122)
		{
			frequency[0]++;
		}
		else if(string[i] >= 48 && string[i] <= 57)
		{
			frequency[1]++;
		}
		else
		{
			frequency[2]++;
		}
	}
	
	printf("There are %d letters in the string.\n", frequency[0]);
	printf("There are %d numbers in the string.\n", frequency[1]);
	printf("There are %d special characters in the string.\n", frequency[2]);
	
	return 0;
}
