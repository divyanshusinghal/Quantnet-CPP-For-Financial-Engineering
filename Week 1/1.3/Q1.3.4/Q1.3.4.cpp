/*
* Question 1.3.4
* Use the ? : operator to print if someone is married or not.
*/

#include<stdio.h>

int main()
{
	int married;
	married = 1; //Assuming the person is married (1 indicates true for this program)
	printf("Marital Status is: %s", (married == 0) ? "Single!" : "Married!");

	return 0;
}