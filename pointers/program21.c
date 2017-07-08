#include <stdio.h>

int main(int argc, char *argv[])
{
	char letters[26];
	letters[0] = 'A';
	char *l = letters;
	for(int i = 1; i < 26; i++)
	{
		*(l + i) = *l + i;
	}
	
	printf("The letters in the alphabet are:\n");
	for(int i = 0; i < 26; i++)
	{
		printf("%c\n", *(l + i));
	}
	
	return 0;
}
