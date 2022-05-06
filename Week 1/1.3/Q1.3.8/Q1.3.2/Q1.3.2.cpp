/*
* Q1.4.2
* Write a program that calculates the surface of a triangle with one 90 degree angle. 
* The formula is half the height multiplied by the base. 
* The program should take an input from the user (base & height), and output the result
*/

#include<stdio.h>

int main()
{
	//Assuming that the base and height are float types.
	float base;
	float height;
	float area;

	//Inputting and storing the base of the right angled triangle
	printf("Enter the base of a right angled triangle:");
	scanf_s("%f", &base); //Using scanf_s to read the inputs from the user.
	printf("Base is %f units \n", base);

	//Inputting and storing the height of the right angled triangle
	printf("Enter the height of a right angled triangle:");
	scanf_s("%f", &height);
	printf("Height is %f units \n", height);
	
	//Calculating the area of the triangle
	area = 0.5f * base * height;
	//Outputting the calculated area
	printf("Area of the right angled triangle is : %f", area);

	return 0;
}

