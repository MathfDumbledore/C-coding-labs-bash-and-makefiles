#include <stdio.h>


int num;

void main()
{
char goOn='y'; //will loop the function and declaring a goOn variable
	while (goOn=='y' || goOn=='Y')
	{
	char inputs [100];

	printf("\ninput a number to test for squarefree: ");
	fgets(inputs, sizeof(inputs), stdin);
	sscanf(inputs, "%d", &num);

	squarefree(maxNum(num));//calls function squarefree which uses the maxNum() function with the value num we get from the user input

	printf("\nAnother test?(Y/N): ");
	fgets(inputs, sizeof(inputs), stdin);//gets the char to know if user wants to continue feeds it back to the while loop
	sscanf(inputs, "%c", &goOn);


	}

}

int maxNum(num) //testing for the maximum possible number that squared equals or is less than the one rquested for the test
{
	int n=1; //declaring var
	int sq=n*n;//declaring var
		
		for (n;sq<num;n++)
		{
		sq = (n)*(n);
			if (sq == num)// must use if and else if because after the loop the n will be +1 giving an incorrect result 
			{
				return n;
			}
			else if (sq>num)
			{
				return n-1;
			}
	
		}
	
}

int squarefree(max) //testing for squarefree
{
	if (max>=2)  // worth testing only if the maximum testable number is>2 because 1^2 is not considered since it will be true for every int if % is used.
	{
		int found = 0;
		int sq;
		int i = 2;
		for (i; i<=max; i++)
		{
		sq = i*i;
			if (num % sq == 0)
			{
				printf("The number %d is not squarefree\n\n", num);
				found = 1;
				break; //if the modulus is 0 we dont care anymore and the num is not squarefree
			}
			
			if (found==0 && i==max) //we want to print this only once so we do it when the for loop runs for the last time
			{
				printf("The number %d is squarefree\n\n", num);
			}
			
			
		
		}
	
	} else
	{
	printf("The number %d is squarefree\n\n",num);
	
	}
}
