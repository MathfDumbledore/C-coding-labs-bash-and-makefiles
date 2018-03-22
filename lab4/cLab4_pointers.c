#include <stdio.h>

int main(void) {
	int i,*myPtr , **myPtrPtr;//** is the pointer to the pointer of myPtrPtr
	int a[2] = {1,2};
	i = 6;
	myPtr = &i; //since myPtr is a pointer the address of i is needed
	myPtrPtr = &myPtr; //myPtrPtr is the pointer of  the address of myPtr we need to use &
		{
			
			int i = 7; //completely new int i separate from the other i taking precedance in this block
			*myPtr = 45;//* is needed to assign the value 45 we are directly accessing the memory location of i
						// this means that now the value of i outside of this block will be 45
			
			printf("The value %d is stored in location %p\n",*myPtr ,myPtr);//we can access the value by * will print 45 
			//because we just changed the value at address myPtr = &i(outside block i) to 45 myPtr will print the hexadecimal memory location &i(outside block one)
			
			printf("The value %d is stored in location %p\n", i, &i);//we can get the location by & will print 7 because the newly declared i takes precedence, 
			//&i will print the memory location of the inner block i
		}
	printf("The value %p is stored in the location %p the value of i at this point is %d \n",*myPtrPtr , myPtrPtr,**myPtrPtr);//since we want the value at *myPtrPtr=&i=myPtr (address of outside block i) 
	//and the second value myPtrPtr is the address of the pointer myPtr itself, **myPtrPtr is 45
	
	printf("The value %d is stored in location %p\n", i, &i);//& will give us the location
	//i=45 because i was changed at it memory location inside the inner block need * for the first call to get the value
	
	printf("\nThe value of a = %p; &a = %p; *a = %d; a[1]= %d; a[2]= %d\n",a,&a,*a,a[0],a[1]);//a and &a both print the memory location of the first array value *a prints the first aray value *(a+1) would print 2
	//a[0] and a[1] just access the value of the array at index 0 and 1
	printf("*(a+1) = %d would print 2\n",*(a+1));
	return 0;
}
