#include <stdio.h>

int main(int argc, char *argv[])
{
	char string[100];
	int key;
	printf("Enter a string to encrypt: ");
	scanf("%s", string);
	printf("Enter a number to use as a key: ");
	scanf("%d", &key);
	
	printf("The encrypted string is: ");
	for(int i = 0; string[i] != '\0'; i++)
	{
		if(string[i] + key >= 65 && string[i] + key <= 90)
		{
			printf("%c", string[i] + key);
		}
		else if(string[i] + key >= 97 && string[i] + key <= 122)
		{
			printf("%c", string[i] + key);
		}
		else
		{
			printf("%c", string[i] + key - 26);
		}
	}
	printf("\n");
	
	return 0;
}
