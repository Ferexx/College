/* A program to calculate the various variables of compound interest, based on user input.
	Written by Jack Price */
#include <stdio.h>
#include <math.h>

double A, P, r, n;																					//Initialise variables
int k, i;


int main(void) {
	k = 12;
	printf("Welcome to the compound interest calculator!");
	printf("\nWhat value would you like to calculate?");
	printf("\n(Enter 1 for A, 2 for P, 3 for r, 4 for n)");											//Decide which variable to calculate
	printf("\nValue: ");
	scanf("%d", &i);

	if (i == 1) {																					//Based on user input, get values from user for other 3 variables
		printf("Please enter the starting principle(P): ");
		scanf("%lf", &P);
		printf("\nPlease enter the interest rate (as percentage rate per annum) (r): ");
		scanf("%lf", &r);
		printf("\nPlease enter the number of years: ");
		scanf("%lf", &n);

		A = (P * pow((1+(r/1200)), (12 * n)));
		printf("A = %lf", A);
	}

	if (i == 2) {
		printf("Please enter the final accumulated amount(A): ");
		scanf("%lf", &A);
		printf("\nPlease enter the interest rate (as percentage rate per annum) (r): ");
		scanf("%lf", &r);
		printf("\nPlease enter the number of years: ");
		scanf("%lf", &n);

		P = (A/(pow((1 + (r/1200)), (12 * n))));
		printf("P = %lf", P);
	}
	if (i == 3) {
		printf("Please enter the starting principle(P): ");
		scanf("%lf", &P);
		printf("\nPlease enter the final accumulated amount(A): ");
		scanf("%lf", &A);
		printf("\nPlease enter the number of years(n): ");
		scanf("%lf", &n);

		r = ((pow((A/P), (1/(12 * n))) - 1) * 1200);
		printf("r = %lf", r);
	}
	if (i == 4) {
		printf("Please enter the starting principle(P): ");
		scanf("%lf", &P);
		printf("\nPlease enter the final accumulated amount(A): ");
		scanf("%lf", &A);
		printf("\nPlease enter the interest rate (as percentage rate per annum) (r): ");
		scanf("%lf", &r);
	
		n = (((log(A/P))/(log(1 + (r/1200)))) / 12);
		printf(" n = %lf", n);
	}
	else {																							//If the user doesn't input a correct number, terminate program
		printf("Sorry, that's not a valid input, please try again.");
	}
}