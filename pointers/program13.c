#include <stdio.h>

// works but quits out at the end (stack smashing detected) 

int main(int argc, char *argv[])
{
	char string[] = "";
	printf("Enter a string: ");
	scanf("%s", &string);
	
	int consonants = 0, vowels = 0;
	char *s = string;
	for(int i = 0; *(s + i) != '\0'; i++)
	{
		if(*(s + i) == 65 || *(s + i) == 69 || *(s + i) == 73 || *(s + i) == 79)
		{
			vowels++;
		}
		else if(*(s + i) == 85 || *(s + i) == 97 || *(s + i) == 101 || *(s + i) == 105)
		{
			vowels++;
		}
		else if(*(s + i) == 111 || *(s + i) == 117)
		{
			vowels++;
		}
		else
		{
			consonants++;
		}
	}
	
	printf("Number of vowels: %d\n", vowels);
	printf("Number of consonants: %d\n", consonants);
	
	return 0;
}
