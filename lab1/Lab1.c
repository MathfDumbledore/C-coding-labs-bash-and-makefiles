

#include <stdio.h> 											//needs to be included for some functions to work

int k = 4; 													//in scope troughout the code


int main(void) 
{
	printf("The value of integer k now is %d\n", k);
	int i = 50; 											// in scope within main the function
	printf("The value of integer i now is %d\n", i);
	unsigned int j = i * 2; 								// in scope within main the function. here i=50 and j=100 after this.
	printf("The value of unsigned int j now is %d\n", j);
	double k = 1.0; 										// needs ; and in scope within main the function
	printf("The value of double k now is %3f\n", k);

		{
			float i = 5.0; 									//in scope only within this block
			printf("The value of float i is %3f\n", i); 	//float i takes precedence in the block prints 5
			k = i * j; 										//a new value of k is made in main fucnc scope since declared outside of this block. 
															//i=5 because precedance, j=100 k=500
			printf("The value of double k is %3f\n", k);
			i *= 6; 										//applies to i=5 since it takes precedence in the block i=i*6=30 scope is only this block
			printf("The value of float i is %3f\n", i);
		}

															//double j; redundant and conflicting because j already declared within the block as unsigned int
	i = k + i; 												//or i += k //k has been updated in the previous block and now is 500 i from this block never changed i=50 
															//therefore now i=550
	printf("Now , the value of int i is %d\n", i);			//prints 550
	return 0;
}

