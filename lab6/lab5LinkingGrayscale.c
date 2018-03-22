#include <stdio.h>
#include "print.h"

void imageFill();
void imagePrint();

int main(void)
{
	int pic[5][5]; //= {{10},{10},{10},{10},{}}
	
	//fprintf(input, "P2 5 5 255\n");//generating the first line of the output so that the code output is correctly recognized
	//fclose(input);
	
	int i=0; //vert
	int b=0; //hor
		for (i;i<=4;i++) //creating a canvas
		{
			for(b;b<=4;b++)
			{
			pic[i][b]=30;
			//printf("%d ",pic[i][b]);
			}
			//printf("\n");
			b = 0;//starting from the 0 horizontal index for the next line
		}
		i=0;
		imageFill(5,5,pic);
		imagePrint(5,5,pic);
		
		char image[5][5];//this could be done where the binary image is made. tidier.
		for (i;i<=4;i++) //converting the array to an array that holds values in 1 byte (char) possible because max expected 255
		{
			for(b;b<=4;b++)
			{
			image[i][b]=pic[i][b];
			//printf("%d ",pic[i][b]);
			}
			//printf("\n");
			b = 0;//starting from the 0 horizontal index for the next line
		}
		
		
		imagePrintBin(5, 5, image);//the binary version
		
}


void imageFill(int a, int b, int pic[][b])
{
	pic[1][1]=pic[1][3]=pic[3][0]=pic[3][4]=pic[4][0]=pic[4][4]=pic[4][1]=pic[4][2]=pic[4][3] = 200;//manually setting up the values of the array
}

