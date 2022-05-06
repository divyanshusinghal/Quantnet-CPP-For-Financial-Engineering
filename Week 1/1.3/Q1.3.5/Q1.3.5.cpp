/*
* Q 1.3.5
* Create a C-program that clearly shows the difference between --i and i--. 
*/

#include<stdio.h>

int main()
{
	//Declared 2 variables (i&j)
	// Variable i to display the post-decrement operator,
	//Variable j to display the pre-decrement operator
	int i = 0;
	int j = 0;

	printf("Original value of i is %d. \n", i);
	printf("Showing the use of Post-Decrement Operator (i--) \n");
	printf("Value of i is now: %d. \n", i--); //Prints first and decrease the value after printing
	printf("\n");
	printf("Original value of j is %d. \n", j);
	printf("Showing the use of Pre-Decrement (--i) \n");
	printf("Value of j is now: %d. \n ", --j); //Decrease the value first and then print the new value

	return 0;
}