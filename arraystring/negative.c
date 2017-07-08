#include <stdio.h>

void print_negative(char *arg[])
{
	for(int i = 0; arg[i] != '\0'; i++)
	{
		int num = atoi(arg[i]);
		if(num < 0)
		{
			printf("%d\n", num);
		}
	}
}

int main(int argc, char *argv[])
{
	print_negative(argv);
	return 0;
}
