#include "print.h"//because includes stdio.h

void imagePrintBin(int a, int b, char pic[][b])//printing the array out 1st line -> 2nd line -> 3rd line etc
{
	int i = 0;
	int i2 = 0;
	//char sizeChar;
	FILE *bin_input;
	bin_input=fopen("grayscaleBinary.txt", "wb");
	
	if (bin_input==NULL)
	{
		printf("could not open grayscaleBinary");
		exit(1);
	}
	fprintf(bin_input, "P5 5 5 255\n");//P5 the binary representation
		
	fwrite(pic,sizeof(char),SIZE_OF_ARRAY,bin_input);//writing the whole array to the file
	//printing only the first byte of the original int array would work because the values are not larger than 1 byte(255)
	//and display expects 1byte for each pixel
			
	fclose(bin_input);//closing the file
}
