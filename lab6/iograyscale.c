#include "print.h"//because includes stdio.h

void imagePrint(int a, int b, int pic[][b])//printing the array out 1st line -> 2nd line -> 3rd line etc
{
	int i = 0;
	int i2 = 0;
	
	FILE *input; //declaring a file at the pointer *input
	input=fopen("grayscale.txt", "w");//input memory location contains the opened file in write setting
	
	if (input==NULL)//if NULL that means fopen could not write/work with grayscale.txt
	{
		printf("could not open grayscale.txt!");
		exit(1);
	}
		fprintf(input, "P2 5 5 255\n");
		for (i;i<=(a-1);i++) //going from up to down
		{
			for(i2;i2<=(b-1);i2++)//going left to right
			{
			//printf("%d ",pic[i][i2]);

			fprintf(input, "%d ",pic[i][i2]);//writing formatted text to the file grayscale.txt
			}
			fprintf(input, "\n"); //starting from the 0 horizontal index for the next line
			i2 = 0;
		}
		fclose(input);
}
