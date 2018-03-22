#include "print.h"//because includes stdio.h

void imagePrint(int a, int b, int pic[][b])//printing the array out 1st line -> 2nd line -> 3rd line etc
{
	int i = 0;
	int i2 = 0;
		
		
		for (i;i<=(a-1);i++) //going from up to down
		{
			for(i2;i2<=(b-1);i2++)//going left to right
			{
			printf("%d ",pic[i][i2]);
			}
			printf("\n"); //starting from the 0 horizontal index for the next line
			i2 = 0;
		}
}
