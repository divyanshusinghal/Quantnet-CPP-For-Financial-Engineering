/*
* Exercise 3: Function Overloading
* Program to implement and test function overloading.
* Note: This file includes the user defined header file "Point.hpp"
* Note: This file contains the implementation of the main() function only
*/

#include<iostream> // cin, cout
#include"Point.hpp"

int main() //main function starts here
{
	double xval; //xval stores the user entered value of x coordinate of the point
	double yval; //yval stores the user entered value of y coordinate of the point

	cout << "Please enter the x and y coordinates of a point.\n"; //requesting the user to enter the values

	cin >> xval >> yval; // // Take multiple inputs (xval, yval) using cin

	Point pt1; //Creating an object called pt1
	pt1.X(xval); // Setting the x coordinate using setX
	pt1.Y(yval); // Setting the y coordinate using setY

	cout << "Coordinates of Point 1 are: (" << pt1.X() << "," << pt1.Y() << ")" << endl;
	cout << "Dist. of " << pt1.ToString() << " from Origin is " << pt1.Distance() << endl;


	// Creating an object called pt2 using constructor that accepts x and y arguement
	Point pt2(1.0, 2.0);

	//Please note that current implementation contains "pass by reference".
	cout << "Dist. between " << pt1.ToString() << " and " << pt2.ToString() << " is " << pt1.Distance(pt2) << endl;

	return 0; // main functions ends here
}
