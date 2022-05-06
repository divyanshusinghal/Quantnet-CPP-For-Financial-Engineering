/*
* Q 1.5.3
* Write a program that consists of two source-files.
* The first (Main.c) contains the main() function and gives the variable i a value.
* The second source-file (Print.c) multiplies i by 2 and prints it.
* Print.c contains the function print() which can be called from main().
*/

#include<stdio.h>
#include"Print.h"

int main()
{
	int i; //Assuming the number is an integer, declare it
	printf("Enter a number: "); //Requesting the input from the user
	scanf_s("%d", &i); //Saving the input to the variable i
	print(i); //Calling the user defined function print with the arguement i.
	return 0;
}