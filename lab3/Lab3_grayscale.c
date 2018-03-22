#include <stdio.h>

int main(void)
{
	int pic[5][5]; //= {{10},{10},{10},{10},{}}
	
	printf("P2 5 5 255\n");//generating the first line of the output so that the code output is correctly recognized
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
		pic[1][1]=pic[1][3]=pic[3][0]=pic[3][4]=pic[4][0]=pic[4][4]=pic[4][1]=pic[4][2]=pic[4][3] = 200;//manually setting up the values of the array
		i = 0;//resetting i and b for genarating an usable output from the generated data
		b = 0;
		
		
		for (i;i<=4;i++) //will print out each line in order from left to right, just like they were built in the previous double for loop
		{
			for(b;b<=4;b++)
			{
			printf("%d ",pic[i][b]);
			}
			printf("\n"); //starting from the 0 horizontal index for the next line
			b = 0;
		}
	return 0;
}
