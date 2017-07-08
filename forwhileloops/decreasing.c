#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	
	for(int i = n; i > 0; i--)
	{
		printf("%d\n", i);
	}
	
	return 0;
}

