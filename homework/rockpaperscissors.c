#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int player;
	printf("Enter 0 for rock, 1 for paper, and 2 for scissors: ");
	scanf("%d", &player);
	
	srand(time(NULL));
	int computer = rand() % 3;
	
	if(computer == 0 && player == 2)
	{
		printf("Rock beats scissors; the computer won!\n");
	}
	else if(player == 2 && computer == 1)
	{
		printf("Scissors beat paper; you won!\n");
	}
	else if(computer == 1 && player == 0)
	{
		printf("Paper beats rock; the computer won!\n");
	}
	else if(computer == 2 && player == 1)
	{
		printf("Scissors beat paper; the computer won!\n");
	}
	else if(player == 0 && computer == 2)
	{
		printf("Rock beats scissors; you won!\n");
	}
	else if(player == 1 && computer == 0)
	{
		printf("Paper beats rock; you won!\n");
	}
	else
	{
		printf("Tie!\n");
	}
	
	return 0;
}
