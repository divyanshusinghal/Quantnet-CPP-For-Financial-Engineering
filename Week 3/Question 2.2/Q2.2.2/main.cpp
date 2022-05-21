/*
* Program to initalize the user-defined type "Point" with user-entered x and y coordinates.
* This program prints the string and the number version of the coordinates.
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
	pt1.setX(xval); // Setting the x coordinate using setX
	pt1.setY(yval); // Setting the y coordinate using setY

	//Pring using ToString
	cout << pt1.ToString() << endl;

	//Print using Getter Functions
	cout << "X coordinate is: " << pt1.getX() << ", Y coordinate is: " << pt1.getY() << "!!!" << endl;


	//Printing the distance of the point from the origin
	cout << "Distance of " << pt1.ToString() << " from (0,0) is: " << pt1.DistanceOrigin() << endl;

	//Printing the distance of the point from another point p
	Point pt2; // Object of another point created

	double pt2_x, pt2_y; //creating the variables to store user-defined coordinates
	cout << "Testing the function to calculate the distance from a user defined point." << endl;
	cout << "Please enter the x-coordinate and y-coordiate" << endl; //requesting user to input the coordinates
	cin >> pt2_x >> pt2_y; //storing the inputted values in pt2_x and pt2_y

	//setting the inputted variables as x,y coordinates of a pointer
	pt2.setX(pt2_x); 
	pt2.setY(pt2_y);

	//Printing the distance of one point from another
	cout << "Distance of " << pt1.ToString() << " from " << pt2.ToString()<< " is: " << pt1.Distance(pt2) << endl;
	return 0; // main functions ends here
}
