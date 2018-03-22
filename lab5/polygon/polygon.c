#include <stdio.h>
#include <math.h>
#include "turtle.h"
#include <string.h>

int main(int argc, char **argv){
int nOfSides;

	if (strcmp(argv[0], "./square")==0)//comparing the exe name with ./square 0 is a true return of the function
	{
		nOfSides=4;
	} else
		{
		 
			sscanf(argv[1],"%d",&nOfSides);//changing argv[1] to an integer
				if (nOfSides<3 || argc==1)//cant make a polygon from 2 points or if no arguments passed and if exe!=./square
				{
					printf("the passed argument must be larger than 2!\n");
					return 1;
				}
		}	
		

double pi = 3.14159265358979323846;//setting up pi from math.h
int sideLen=40;//starting point in pixels right, also the radius of the polygon
double internalAngle=(180*(nOfSides-2))/(nOfSides);

turtle_init(256, 256);//making the canvas
for (int i = 0 ; i<nOfSides ; i++)//making the path
{
turtle_forward(sideLen);//going right
turtle_turn_right(180-internalAngle);//for some reason the line is drawn to the right...
}

turtle_save_png("theImage");
printf("\n  SUCCESS  if the side nuber is too large the drawing will become chaotic because the drawn path goes outside of picture boundaries\n\n");
return 0;
}
