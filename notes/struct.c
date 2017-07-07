// New header files. What does each give you?
// Look into functions that you don't know. Remember man 2 function or man 2 function.
// Write a comment for every single line explaining what it does in English.
// Trace through each function and variable so you know where it comes from in the program.
// Look up any symbols you don't understand.
// NULL will always throw an error.

// stdio.h includes functions like printf, scanf, getchar, etc.
#include <stdio.h>
// assert.h provides a macro called assert
#include <assert.h>
// stdlib.h includes fuctions like rand, malloc, atoi, etc.
#include <stdlib.h>
// string.h includes various functions for manipulating arrays of characters
#include <string.h>

// creates a chunk of memory to create a structure named Person that has four members
typedef struct Person
{
	char *name;
	int age;
	int height;
	int weight;
} person_t;

// 
struct Person *Person_create(char *name, int age, int height, int weight)
{
	// malloc (memory allocator) - give me a chunk of ram that is ( ) size
	// malloc function allocates the requested memory and returns a pointer to it
	struct Person *who = malloc(sizeof(struct Person));
	// assert macro can be used to add diagnostics to a C program, makes sure it's true
	assert(who != NULL);
	
	// arrows assign variable values to structure members
	// initialized each field of the structure using the arrow with respective values
	// strdup function duplicates strings, leaves you with a changeable copy of the string
	// dereferences the pointer
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);
	
	// free function deallocates the memory previously allocated by calloc, malloc, or realloc
	// frees the memory so you don't have memory leak
	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	// accesses the pointer by its name after dereferencing it with strdup(name)
	printf("Name: %s\n", who->name);
	printf("Name: %d\n", who->age);
	printf("Name: %d\n", who->height);
	printf("Name: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	// create two people structures
	struct Person *joe = Person_create("Joe Alex", 32, 53, 140);
	struct Person *frank = Person_create("Frank Blank", 20, 72, 100);
	
	// print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);
	
	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);
	
	// make everyone age 20 years and print them again
	joe->age += 20;
	joe->height += 2;
	joe->weight += 40;
	Person_print(joe);
	
	frank->age += 20;
	frank->weight += 40;
	Person_print(frank);
	
	// destroy both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);
	
	return 0;
}
