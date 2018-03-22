#include <stdio.h>

void main()
{
char inputs [100];
int bottles;
printf("How many bottles on the wall?\n");
fgets(inputs, sizeof(inputs), stdin);
sscanf(inputs, "%d", &bottles);

	if ((bottles<=0) || (bottles>99))// test if constraints are met
	{
	printf("the shelf needs real bottles but not more than 99!\n");
	}
	else {
	
		for (bottles; bottles>=1; bottles--)//runs the loop while there is a positive num of bottles
		{
			int rem = bottles-1;//needed because there is 1 less bottle than the current num of bottles in the last line of the verse
			
			if (bottles>2) 
			{
			printf("\n%d Green Bottles, sitting on the wall\n",bottles);
			printf("%d Green Bottles, sitting on the wall\n",bottles);
			printf("and if 1 Green Bottle should accidentally fall...\n");
			printf("...there\'ll be %d Green Bottles, sitting on the wall.\n",rem);
			}
		
			else if (bottles==2)
			{
			printf("\n%d Green Bottles, sitting on the wall\n",bottles);
			printf("%d Green Bottles, sitting on the wall\n",bottles);
			printf("and if 1 Green Bottle should accidentally fall...\n");
			printf("...there\'ll be %d Green Bottle, sitting on the wall.\n",rem);
			}
		
			else if (bottles==1)
			{
			printf("\n%d Green Bottle, sitting on the wall\n",bottles);
			printf("%d Green Bottle, sitting on the wall\n",bottles);
			printf("and if 1 Green Bottle should accidentally fall...\n");
			printf("...there\'ll be no Green Bottles, sitting on the wall.\n\n",rem);
			}	
		
		}
	}
}

