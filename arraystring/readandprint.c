#include <stdio.h>


void print_elements(char *arg[])
{
	for(int i = 0; arg[i] != '\0'; i++)
	{
		printf("%s\n", arg[i]);
	}
}

int main(int argc, char *argv[])
{
	print_elements(argv);
	return 0;
}
