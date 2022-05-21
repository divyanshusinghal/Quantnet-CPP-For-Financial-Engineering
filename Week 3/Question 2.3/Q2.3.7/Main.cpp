/*
* Question 2.3 - Exercise 7
* This solutions tests the implementation of inline functions for Point Class
*/

#include<iostream> //cout, cin
#include<string> //string
#include"Point.hpp" // Point class containing the declarations. Also contains the inline functions

using namespace std; // namespace to avoid std::cout, std::cin

int main()
{
	//Get coordinates
	double x, y; //x,y to store the coordinates
	cout << "Please input x and y coordinate (with space between them): " << endl; //requesting user for input
	cin >> x >> y;//Get x and y coordinate

	Point p1(x, y); //create the object of the class using x and y coordinates

	//Display the use of Getter Functions here.
	cout << "Printing X using the Getter Function: " << p1.X() << endl;
	cout << "Printing Y using the Getter Function: " << p1.Y() << endl;

	//Printing the String description of the point
	cout << p1.ToString() << endl;

	//Modifying the point using the setter functions here

	//Hard-coded to set to Origin
	p1.X(0.0);
	p1.Y(0.0);

	//Printing the String description of the point
	cout << p1.ToString() << endl;

	return 0;
}