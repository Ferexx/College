/* A program to compute the roots of quadratic equations in the form ax^2+bx+c=0. Written by Jack Price */
#include <stdio.h>
#include <math.h>

double a, b, c;																				//Initialises variables
double r1, r2;


int main(void) {																			//Main function
	printf("Welcome to quadratic roots calculator!\n");										//Gives user instructions on how to use
	printf("First, please ensure your equation is in the form ax^2+bx+c=0\n");
	printf("Now, please enter a value for a, b and c:\n");
	printf("a = ");
	scanf("%lf", &a);																		//Gets user input for a, b and c
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);

	printf("Thank you, computing your answer(s) now...");

	if (((b * b) - (4 * a * c)) > 0) {														//Checks if discriminant is greater than 0, to determine if the equation will have real roots or not
	
	r1 = (((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a));									//Calculates roots using equation
	r2 = (((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a));
	printf("\nThe 1st root is: %lf", r1);
	printf("\nThe 2nd root is: %lf", r2);
	return 0;
	}
	else {
		printf("\nThe roots of this equation are imaginary, sorry!");
	}
}