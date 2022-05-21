/*
* Exercise 4: Const Functions
* Program to implement and test const functions.
* Note: This file includes the user defined header file "Point.hpp"
* Note: This file contains the implementation of the main() function only
*/

#include<iostream> // cin, cout
#include"Point.hpp"

int main() //main function starts here
{
	const Point cp(1.5, 3.9);

	//cp.X(0.3); //Error message: Object has type qualifiers that prevent a match
	
	//Printing the line that changes the x - coordinate to code that reads the x - coordinate:
	cout << cp.X() << endl;
	// (1)Since the x and y coordinate getter are const by making it a const function. 
	// (2) The Distance() and ToString() functions are also const because these don’t change the point object as well.
	// No error expected.

	return 0;
}
