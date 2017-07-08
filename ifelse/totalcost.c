#include <stdio.h>

int main(int argc, char *argv[])
{
	int units = atoi(argv[1]);
	float sum, surcharge = 0.2;
	
	if(units < 50)
	{
		sum = 0.5*units;
	}
	else if(units <= 150)
	{
		sum = 0.5*50 + (units - 50)*0.75;
	}
	else if(units <= 250)
	{
		sum = 0.5*50 + 0.75*100 + (units - 150)*1.2;
	}
	else
	{
		sum = 0.5*50 + 0.75*100 + 1.2*100 + (units - 250)*1.5;
	}
	
	sum *= surcharge + 1;
	printf("The total cost is: $%f.\n", sum);
	
	return 0;
}
