#include <stdio.h>

int main(int argc, char *argv[])
{
	char key[100], string[100], encrypt[100], decrypt[100];
	printf("Enter a key word: ");
	scanf("%s", key);
	printf("Enter a string to encrypt: ");
	scanf("%s", string);
	
	int length = 0;
	for(int i = 0; key[i] != '\0'; i++)
	{
		length++;
	}
	
	int count = 0;
	for(int i = 0; string[i] != '\0'; i++)
	{
		if(count != length)
		{
			encrypt[i] = string[i] + key[count] - 64;
			while(encrypt[i] > 90)
			{
				encrypt[i] -= 26;
			}
			count++;
		}
		else
		{
			count = 0;
			encrypt[i] = string[i] + key[count] - 64;
			while(encrypt[i] > 90)
			{
				encrypt[i] -= 26;
			}
			count++;
		}
	}
	
	printf("The encrypted string is: ");
	for(int i = 0; encrypt[i] != '\0'; i++)
	{
		printf("%c", encrypt[i]);
	}
	printf("\n");
	
	count = 0;
	for(int i = 0; encrypt[i] != '\0'; i++)
	{
		if(count != length)
		{
			decrypt[i] = encrypt[i] - key[count] + 64;
			while(decrypt[i] < 65)
			{
				decrypt[i] += 26;
			}
			count++;
		}
		else
		{
			count = 0;
			decrypt[i] = encrypt[i] - key[count] + 64;
			while(decrypt[i] < 65)
			{
				decrypt[i] += 26;
			}
			count++;
		}
	}
	
	printf("The decrypted string is: ");
	for(int i = 0; decrypt[i] != '\0'; i++)
	{
		printf("%c", decrypt[i]);
	}
	printf("\n");
	
	return 0;
}
