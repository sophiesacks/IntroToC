#include <stdio.h>

int length(char string[])
{
	int count = 0; 
	for(int i = 0; string[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

int main(int argc, char *argv[])
{
	char string[] = "Sophie";
	printf("%d\n", length(string));
	return 0;
}
