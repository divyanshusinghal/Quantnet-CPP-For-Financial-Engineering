/*
* Q 1.5.1
* Write a C-program that calls a function minus().
* This function receives two arguments and returns the difference (regular subtraction, not absolute)
* This difference should be printed on screen.
*/

#include<stdio.h>

double minus(double num1, double num2)
{
	//returns the result of the regular subtraction between num1 and num2
	return num1 - num2;
}


int main()
{
	double number1; 
	double number2;

	printf("%s\n", "Print two numbers separated by space between them.");
	scanf_s("%lf %lf", &number1, &number2); //two numbers are stored in number1 and number 2 accordingly.

	//prints the output of the function minus.
	printf("%lf", minus(number1, number2)); //minus takes in two inputs (number1, number2)
	
	return 0;
}

