/*
* Q1.4.4
* Create a C-program that prints two columns on the screen with the temperature in degrees Fahrenheit and the equivalent temperature in degrees Celsius.
* The left column shows the temperature in Fahrenheit. The right column shows the temperature in Celsius.
*/


#include<stdio.h>

int main()
{
	double initial_temp_fahrenheit = 0.0; //initial temp in fahrenheit
	double final_temp_fahrenheit = 300.0; //final temp in fahrenheit
	double step_size = 20.0; // step size in fahrenheit
	double fahrenheit; //variable to store the temp in fahrenheit
	double celsius; //variable to store the temp in celsius

	fahrenheit = initial_temp_fahrenheit; //assigning the variable fahrenheit to the initial temp value


	printf("%10s%10s\n", "Fahrenheit", "Celsius"); 	// Print header columns

	while (fahrenheit <= final_temp_fahrenheit) //loop runs as until variable fahrenheit is less than final temp
	{
		celsius = (5.0 / 9.0) * (fahrenheit - 32.0); //formula to convert temp in fahrenheit to temp in celsius
		printf("%10.0f%10.1f\n", fahrenheit, celsius); //Prints temp in Fahrenheit and Celsius as per the format
		fahrenheit += step_size; // increase the variable fahrenheit by the initialized step size
	}
	return 0;

}