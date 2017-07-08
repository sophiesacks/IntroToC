#include <stdio.h>

void insert(char *new, int place, char *arg[])
{
	char *copy[1 + sizeof(arg)/sizeof(char)];
	for(int i = 0; i < place; i++)
	{
		copy[i] = arg[i];
	}
	copy[place] = new;
	if(place < sizeof(arg)/sizeof(char))
	{
		for(int i = place; arg[i] != '\0'; i++)
		{
			copy[i + 1] = arg[i];
		}
	}
	for(int i = 0; copy[i] != '\0'; i++)
	{
		printf("%s\n", copy[i]);
	}
}

int main(int argc, char *argv[])
{
	insert("hi", 2, argv);
}

// this program works but quits out at the end 
