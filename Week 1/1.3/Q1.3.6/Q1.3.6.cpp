/*
* Q1.3.6
* Write a C-program that shifts any number two places to the right. 
* Input should be an integer. Output should be the shifted result, 
* as well as output an indication of whether a logical or arithmetic 
* shift is performed (if a 1 or 0 is shifted in at the left side) for the inputted number.
*/

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf_s("%d", &num);

	// Note: In C,  signed integers are right-shifted using the arithmetic shift, 
	// And unsigned integers are right-shifted using the logical shift.

	signed int num1; 
	unsigned int num2; 
	num1 = num; //creating signed copy of the integer num
	num2 = num; //creating an unsigned copy of the integer num

	printf("Right shifting a SIGNED integer of value %d by 2 places gives % d (expected ARITHMETIC SHIFT). \n", num1, num1 >> 2);
	printf("Right shifting an UNSIGNED integer of value %d by 2 places gives %d (expected LOGICAL SHIFT). \n", num2, num2 >> 2);

	return 0;

}