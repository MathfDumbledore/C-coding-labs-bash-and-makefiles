
#include <stdio.h>

int factorial();
int rfactorial();

int main(int argc, char *argv[])
{
	//printf("%c",argv[0]);
	//char input[100];
	int facNum;
	//		puts("Enter the value the factorial will be calculated for\n");
	//		fgets(input , sizeof(input), stdin);
			sscanf(argv[1] ,"%d", &facNum);
	printf("the factorial of %d is %d\n",facNum,factorial(facNum));
	printf("the rfactorial of %d is %d\n",facNum,rfactorial(facNum));
	return 0;
}

rfactorial(int input)
{
	if (input==1 || input == 0)
	{
		return 1;
	}
	while (input>1)
	{
		input = input*rfactorial(input-1);
		return input;
	}
	
}

factorial(int input)
{
	//printf("\ninput = %d\n",input);
	int result = 1;
	for (input; input>1; input--)
	{
		result = result*input;
	}
	return result;
}
