

#include <stdio.h>

void main()
{
float result;
char op; //used to get the operator char + / - etc.
char inputs [100];
float x;
float y;

printf("Enter the first value, the operator you want to use(+ - * /) and the second value\n\n");
fgets(inputs, sizeof(inputs), stdin);
sscanf(inputs , "%f %c %f", &x, &op, &y);

switch (op)
	{
		case '+':
			result = x+y;
		break;
	
		
		case '-':
			result = x-y;
		break;
		
		
		case '*':
			result = x*y;
		break;
		
		
		case '/':
			result = x/y;
		break;
		
	}
	
	printf("this is the result of %f %c %f = %f\n\n",x,op,y,result);
	
}
