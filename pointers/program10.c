#include <stdio.h>

int length(char string[])
{
	char *s = string;
	int count;
	for(int i = 0; *(s + i) != '\0'; i++)
	{
		count++;
	}
	return count;
}

int main(int argc, char *argv[])
{
	char string[] = "";
	printf("Enter a string: ");
	scanf("%s", &string);
	printf("The length of the string %s is %d.\n", string, length(string));
	return 0;
}

// this works but quits out at the end (stack smashing detected) 
