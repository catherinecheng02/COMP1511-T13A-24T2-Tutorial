// part1_variables
//
// This program was written by Catherine Cheng (z5310517),
// on 04-06-2024
//
// This program calculates the area of a circle, given a radius

#include <stdio.h>

#define PI 3.14159

int main(void) {
	// 0. What data types have we learnt?
	// int - %d, char - %c, double - %lf 
	// 1. Declare the variables
	double radius;
    // 2. Initalise the variables
    scanf("%lf", &radius);
    // 3. Calculate the area of the circle
	
    double area = PI*radius*radius;
	// 4. Print the result
	printf("area = %lf\n", area);

	return 0;
}
