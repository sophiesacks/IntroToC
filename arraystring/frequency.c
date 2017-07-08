#include <stdio.h>

int main(int argc, char *argv[])
{
	char string[] = "Hello world";
	int frequency[127];
	for(int i = 0; i < 127; i++)
	{
		frequency[i] = 0;
	}
	
	for(int i = 0; string[i] != '\0'; i++)
	{
		frequency[string[i]]++;
	}
	
	for(int i = 65; i <= 90; i++)
	{
		printf("There are %d %c's in the string.\n", frequency[i], i);
	}
	for(int i = 97; i <= 122; i++)
	{
		printf("There are %d %c's in the string.\n", frequency[i], i);
	}
	printf("There are %d spaces in the string.\n", frequency[127]);
	
	return 0;
}
