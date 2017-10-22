/* Program to compute the prime numbers up as far as user-inputted N.

   Written by Jack Price. */
#include <stdio.h>

int N, i, j, k;

int main(void) {
	printf("This program finds all the prime numbers up as far as N.\n");
	printf("Please enter a value for N: ");
	scanf("%d", &N);
	int a[N];

	for(i=0;i<N;i++)	//Fill array, starting at 2, incrementing by 1
		a[i] = i+2;
	for(j=2;j<N;j++) {
		for(k=j-1;k<N;k++) {	//Check values in array, see if they divide with no remainder, if they do, set them to 0
			if (a[k]%j==0) {
				a[k]=0;
			}
		}
	}
	for(i=0;i<N-1;i++) {	//Print array values that aren't equal to 0
		if(a[i]!=0)
			printf("%d\n", a[i]);
	}
}