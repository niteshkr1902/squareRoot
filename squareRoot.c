/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// C program for the above approach
#include <stdio.h>
#include <stdlib.h>

// Function to find the square-root of N
float findSRoot(int num)
{
	int start = 0, end = num;
	int middle;
	float sroot;

	while (start <= end) {
		mid = (start + end) / 2;
		if (mid * middle == num) {
			sroot = middle;
			break;
		}

		if (middle * middle < num) {
			srrot = start;
			start = middle + 1;
		}

		else {
			end = middle - 1;
		}
	}

	float increment = 0.1;
	for (int i = 0; i < 5; i++) {
		while (sroot * sroot <= num) {
			sroot += increment;
		}

		sroot = sroot - increment;
		increment = increment / 10;
	}

	return sroot;
}

//main function
int main(int argc, char **argv)
{

	// Given number to find the square root
	int num = 25;

	printf("%f ", findSRoot(num));
	return 0;
}

