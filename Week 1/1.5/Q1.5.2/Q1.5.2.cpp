/*
* Q 1.5.2
* Write a C-program that prints the factorials of a number.
* 6! (six factorial) is the same as 6 * 5 * 4 * 3 * 2 * 1
* Must make use of a recursive function.
*/

#include<stdio.h>

int fact(int number) 
{
	//This function returns the factorial of a number using recursion

	//Base case: If the number is 0 or 1, then the function returns 1
	if (number == 0 || number == 1)
		return 1;
	else
		// For any number (not 0 or 1), the function returns the number * function(number-1)
		return number * fact(number - 1);
}

int main()
{
	int number; //Declare the number whose whose factorial you want
	printf("%s", "Input an integer whose factorial you want.\n");
	scanf_s("%d", &number);

	//Outputting the factorial of number below
	printf("Factorial of %d is %d.\n", number, fact(number));

	return 0;
}