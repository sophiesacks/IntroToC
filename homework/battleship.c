#include <stdio.h>

int main(int argc, char *argv[])
{
	int board[9][9];
	for(int row = 0; row < 9; row++)
	{
		for(int col = 0; col < 9; col++)
		{
			board[row][col] = 0;
		}
	}
	board[4][6] = 1;
	board[4][7] = 1;
	board[1][3] = 1;
	board[2][3] = 1;
	board[3][3] = 1;
	board[8][9] = 1;
	
	int row, col, count = 0;
	char game = 'y';
	while(count < 6)
	{
		printf("Pick a row: ");
		scanf("%d", &row);
		printf("Pick a column: ");
		scanf("%d", &col);
		if(board[row][col] == 1)
		{
			printf("You hit a ship!\n");
			count++;
		}
		else
		{
			printf("You missed!\n");
			printf("Would you like to continue? (y/n) ");
			scanf(" %c", &game);
			if(game == 'n')
			{
				break;
			}
		}
	}
	
	if(count == 2)
	{
		printf("You hit all of the ships! You win!\n");
	}
	else
	{
		printf("Sorry, you lost.\n");
	}
	
	return 0;
}
