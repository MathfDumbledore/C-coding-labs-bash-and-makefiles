#include <stdio.h>
#include <stdlib.h>
double validate_input(int argc , char * argv[]) 
{
		if (2!=argc)//checking if too many or too litle arguments passed 
		{
			fputs("Too many inputs - just enter one double!", stderr);
			exit(1);
		}

	double val;
	int parsed = sscanf(argv[1], "%lf", &val );//sscanf returns 1 if the value argv[1] is successfuly made to be lf
		
		if (0== parsed) 
		{
			fputs("Could not parse input as a double!", stderr);
			exit(1);
		}
	
	return val;
}
