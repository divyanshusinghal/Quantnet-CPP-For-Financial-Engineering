/*
* Problem 2.3 - Exercise 6
* This solution contains the implementation of the Point and Circle Class
* This main.cpp file tests the implementations of the Circle class
*/

#include"Point.hpp" //include Point file to use the functionalities of the Point Class
#include"Circle.hpp" //include Circle file to use the functionalities of the Circle Class
#include<iostream> // cin, cout
#include<string> //string

using namespace std; //to avoid using std::cin, std::cout

int main()
{
	double rad; //variable to store the user-inputted radius of the circle
	Point pt; //Point type variable pt stores the user-inputted coordinates of the circle
	double pt_x, pt_y; //variables stores the x and y values of the user-inputted coordinates

	//Creating the circle: Step 1 - Requesting inputs (radius and center) from the user
	cout << "Please enter the coordinates of the center of the circle (x and y followed by space): " << endl;
	cin >> pt_x >> pt_y; //storing the coordinates of the center of the circle
	pt.X(pt_x); //setting the value of x coordinate of a point using the setter function
	pt.Y(pt_y); //setting the value of y coordinate of a point using the setter function
	cout << "Please enter the radius of the circle: " << endl;
	cin >> rad; //storing the radius of the circle in rad.

	Circle c; // creating an instance of the class Circle
	c.Radius(rad); // setting the radius of the circle
	c.Center(pt); // setting the center of the circle using the point created earlier

	cout << c.ToString() << endl; //printing the description (radius and circumference) of the circle

	cout << "Diameter of the circle is: " << c.Diameter() << endl; //Printing the diameter of the circle

	cout << "Circumference of the circle is: " << c.Circumference() << endl;//printing the circumference of the circle

	cout << "Area of the circle is: " << c.Area() << endl; // printing the area of the circle

	return 0;
}