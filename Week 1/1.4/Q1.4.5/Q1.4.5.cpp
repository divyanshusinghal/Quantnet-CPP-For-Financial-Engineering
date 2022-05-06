/*
* Q 1.4.5
* Create a C-program that prints two columns on the screen with the temperature in degrees Celsius in the left column
* and degrees Fahrenheit in the right column
*/

#include<stdio.h>

int main()
{
	double initial_temp_celsius = 0.0; //start value of temp in celsius
	double final_temp_celsius = 19.0; //final value of temp in celsius
	double step_size = 1.0; // step size 

	double fahrenheit;

	printf("%10s%15s\n", "Celsius", "Fahrenheit"); //Output Header Column

	//For loop where i is initialized to initial_temp_celsius
	//..runs till final_temp_celsius
	// and increases by step_size in each iteration

	for (double i = initial_temp_celsius; i <= final_temp_celsius; i += step_size)
	{
		fahrenheit = ((9 / 5) * i) + 32; //formula to convert celsius to fahrenheit
		printf("%10.1f%15.1f\n", i, fahrenheit); //Prints degrees Fahrenheit with 1 position after the comma
	}
	return 0;
}