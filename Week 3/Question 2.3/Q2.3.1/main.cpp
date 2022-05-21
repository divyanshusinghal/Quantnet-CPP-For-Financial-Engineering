/*
* Program to initalize add extra constructors to existing Point Class.
* Note: This file includes the user defined header file "Point.hpp"
* Note: This file contains the implementation of the main() function only
*/


#include<iostream> // cin, cout
#include"Point.hpp"
int cobj;
int dobj;

int main() //main function starts here
{
	double xval; //xval stores the user entered value of x coordinate of the point
	double yval; //yval stores the user entered value of y coordinate of the point

	cout << "Please enter the x and y coordinates of a point.\n"; //requesting the user to enter the values

	cin >> xval >> yval; // // Take multiple inputs (xval, yval) using cin

	cobj = 0;
	dobj = 0;
	Point pt1; //Creating an object called pt1
	pt1.setX(xval); // Setting the x coordinate using setX
	pt1.setY(yval); // Setting the y coordinate using setY

	// Creating an object called pt2 using constructor that accepts x and y arguement
	Point pt2(1.0, 2.0);
	
	//Testing the succesful creation using the new functionality here
	cout << pt2.ToString() << endl;

	//Please note that current implementation contains "pass by reference".
	cout << "Dist. between " << pt1.ToString() << " and " << pt2.ToString() << " is " << pt1.Distance(pt2) << endl;
	// Creating an object called pt3 using constructor that accepts x and y arguement

	Point refptr(10, 15); // Normal constructor is called here
	Point pt3 = refptr; // Copy constructor is called here
	//Testing the succesful creation using the new functionality here
	cout << pt3.ToString() << endl;
	//Please note that current implementation contains "pass by reference".
	cout << "Dist. between " << pt1.ToString() << " and " << pt3.ToString() << " is " << pt1.Distance(pt3) << endl;
	cout << "Number of times object was created: " << cobj << endl;
	return 0; // main functions ends here
}
