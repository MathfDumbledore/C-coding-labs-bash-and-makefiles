

#include <stdio.h>

int main()
{
	float a = 3.0;
	float b = 9.0;
	int c=5;
	int d=7;
	
	float add = a+b;
	float sub = a-b;
	float mult = a*b;
	float div = a/b;
	int rem = c%d;
	
	//double misc = 10.0/20.0;
	
	printf("the addition of integers %.0f and %.0f is %.0f\n", a, b, add);
	printf("the subtraction of integers %.0f and %.0f is %.0f\n", a, b, sub);
	printf("the multiplication of integers %.0f and %.0f is %.0f\n", a, b, mult);
	printf("the division of integers %.0f/%.0f is %.2f\n", a, b, div); 
	printf("the reminder of integers %d/%d is %d\n", c, d, rem);       
	
	//printf("10/2 is %f", misc);
	
	
	return 0;
}

