/*
* Q 1.3.7
* Write a C-program that efficiently multiplies a number by a factor 2 to the power n. 
* The number to multiply and n are variables, which get a value at the start of the program.
*/

#include<stdio.h>

int main()
{
	int num; // Number to multiply with
	int n; // 2 will be raised to the power of n

	printf("Input 2 numbers: One number to multiply with, and other as power of 2 -");
	scanf_s("%d%d", &num, &n); //reading the inputs from the user
	printf("Number is: %d.\n", num);
	printf("Power is: %d.\n", n);

	//As mentioned in the Clue: 1 shift to the left is the same as multiplying by 2.
	//Applying the same principles to print out the results below
	printf("Expected output is: %d", num << n);

	return 0;
}