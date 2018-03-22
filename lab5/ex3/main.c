#include <stdio.h>
#include <stdlib.h>//needed for exit functions
#include <math.h>//needed for sbrt and sqrt functions
#include "validate.h"
#include "complex.h"

int main(int argc , char * argv[]) 
{
	double x, cub_x , re_cub_x , im_cub_x;
	x = validate_input(argc , argv);
	cub_x = cbrt(x);
	re_cub_x = re_complexroots(cub_x);//getting the real part of the comlex num
	im_cub_x = im_complexroots(cub_x);//getting the imaginary part of a complex num
	printf("The cube roots of %f are %f, %f + %fi and %f - %fi.\n", x, cub_x , re_cub_x , im_cub_x , re_cub_x ,im_cub_x );
 
	return 0;
}
