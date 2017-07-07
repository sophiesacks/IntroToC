#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays that we care about 
	int ages[] = {23, 42, 12, 89, 2};
	char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};
	
	// safely get the size of ages 
	int count = sizeof(ages)/sizeof(int);
	
	// first way to print: using indexing 
	for(int i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", names[i], ages[i]);
	}
	printf("----------\n");
	
	// set up the pointers to the start of the arrays 
	int *cur_age = ages;
	char **cur_name = names;
	
	// second way to print: using pointers 
	for(int i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
	}
	printf("----------\n");
	
	// third way to print: pointers as arrays
	for(int i = 0; i < count; i++)
	{
		printf("%s is %d years old.\n", cur_name[i], cur_age[i]);
	}
	
	return 0;
}
