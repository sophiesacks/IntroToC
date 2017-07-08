#include <stdio.h>

int main(int argc, char *argv[])
{
	char letter = 'A';
	
	for(int i = 0; i < 26; i++)
	{
		printf("%c\n", letter);
		letter++;
	}
	
	return 0;
}
