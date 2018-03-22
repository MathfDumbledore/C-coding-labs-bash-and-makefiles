


#include <stdio.h>

struct TwoDPoint
{
	double x; double y;//need to be 2 distict declarations for syntax {x,y} to be used later
} ;

int main(void) 
{
	struct TwoDPoint vector[1]; //creating an array of struct TwoDPoint of size 2
		//{
			char input[100];
			puts("Please enter the x and y coordinates of the 1st point , separated by a coma.");
			fgets(input , sizeof(input), stdin);
			sscanf(input ,"%lf,%lf", &vector[0].x,&vector[0].y);//need to use %lf not to loose precision
			printf("\nx = %lf y= %lf\n",vector[0].x,vector[0].y);
			
			puts("Please enter the x and y coordinates of the 2nd point , separated by a coma.");
			fgets(input , sizeof(input), stdin);
			sscanf(input ,"%lf,%lf", &vector[1].x,&vector[1].y);//need to use %lf not to loose precision
			printf("\nx = %lf y= %lf\n",vector[1].x,vector[1].y);
		//}// the intent of making a separate block was to declare the x and y of the 2 different points first and then use them later, no need to do this or to make char input[100]local to the block if there is more code using rhe same name in the main fucntion.
	
	double x_dist = (vector[0].x - vector[1].x);
	double y_dist = (vector[0].y - vector[1].y);
	printf("The square of the distance between the two points is: %lf\n", (x_dist*x_dist)+(y_dist*y_dist));//lf not to lose precision
	return 0;
}
