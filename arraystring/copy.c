#include <stdio.h>

int main(int argc, char *argv[])
{
	char *copy[sizeof(argv)/sizeof(char)];
	for(int i = 0; argv[i] != '\0'; i++)
	{
		copy[i] = argv[i];
	}
	for(int i = 0; copy[i] != '\0'; i++)
	{
		printf("%s\n", copy[i]);
	}
	return 0;
}
