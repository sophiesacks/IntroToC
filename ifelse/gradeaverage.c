#include <stdio.h>

int main(int argc, char *argv[])
{
	int g1 = atoi(argv[1]);
	int g2 = atoi(argv[2]);
	int g3 = atoi(argv[3]);
	int g4 = atoi(argv[4]);
	int g5 = atoi(argv[5]);
	double avg = (g1+g2+g3+g4+g5)/5.0;
	
	if(avg >= 90)
	{
		printf("A\n");
	}
	else if(avg >= 80 && avg < 90)
	{
		printf("B\n");
	}
	else if(avg >= 70 && avg < 80)
	{
		printf("C\n");
	}
	else if(avg >= 60 && avg < 70)
	{
		printf("D\n");
	}
	else 
	{
		printf("F\n");
	}
	
	return 0;
}
