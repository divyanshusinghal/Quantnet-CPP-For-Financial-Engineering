/*
* Question 2.3 - Exercise 1: Point Class
* This header file Point.hpp contains the declaration of the Point Class.
* This header file has also been modified to add new constructors
* Functions updated to test function overloading
*/

#ifndef Point_HPP
#define Point_HPP

#include<iostream> //cout, cin
#include<string> //string, sstring
#include<sstream>  //stringstream
#include<cmath>

using namespace std;

//extern int cobj; //global counter to count the number of times constructor was called
//extern int dobj; //global counter to count the number of times destructor was called

class Point //definition of class Point starts here
{
private: // x and y coordinates are private. Only member functions can access them.
	double m_x; // declaration of X coordinate
	double m_y; // declaration of Y coordinate

public: //member functions and constructors are made public for user to access

	//Constructor and Destructor
	Point(); //Default Constructor
	Point(double x_val, double y_val); //Constructor that takes in x and y vlaue as arguement
	Point(const Point& refptr); //Creating a constructor using a copy constructor
	~Point(); //Destructor

	// Getter Functions

	//note: getX and getY to only return the values (hence made CONST)
	double X() const; // Getter function for X
	double Y() const; // Getter function for Y

	//Setter Functions
	void X(double xval); // Setter function for X
	void Y(double yval); // Setter function for Y

	//Defintion of ToString function (made CONST since they only return value, but do not modify)
	string ToString() const; // returns a string description of the point

	double Distance(); // Calculate the distance to the origin (0, 0).
	double Distance(Point& p) const; // Calculate the distance between two points 
	//(arguement passed as a reference)

};
#endif // !Point_HPP
