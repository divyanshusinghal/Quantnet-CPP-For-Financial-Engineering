/*
* Question 2.5 - Exercise 7
* This header file Point.hpp contains the declaration of the Point Class.
* This header file has also been modified to add new constructors
* File updated to test function overloading
* File updated to declare inline functions
*/

#ifndef Point_HPP
#define Point_HPP

#include<iostream> //cout, cin
#include<string> //string, sstring
#include<sstream>  //stringstream
#include<cmath>

using namespace std;

class Point //definition of class Point starts here
{
private: // x and y coordinates are private. Only member functions can access them.
	double m_x; // declaration of X coordinate
	double m_y; // declaration of Y coordinate

public: //member functions and constructors are made public for user to access

	//Constructor and Destructor
	Point(); //Default Constructor
	Point(const double& val_x, const double& val_y); //Constructor that takes in x and y vlaue as arguement
	Point(const Point& refptr); //Creating a constructor using a copy constructor
	~Point(); //Destructor

	// Getter Functions

	//note: getX and getY to only return the values (hence made CONST)
	
	double X() const; // implementation of the inline function done below
	double Y() const; //implementation of the inline function done below

	//Setter Functions
	//Implemented here: Expectation is to be treated as normal inline variables
	void X(double xval)
	{
		m_x = xval;
	}// Setter function for X
	void Y(double yval)
	{
		m_y = yval;
	}// Setter function for Y

	//Defintion of ToString function (made CONST since they only return value, but do not modify)
	string ToString() const; // returns a string description of the point

	double Distance(); // Calculate the distance to the origin (0, 0).
	double Distance(Point& p) const; // Calculate the distance between two points 
	//(arguement passed as a reference)

};

inline double Point::X() const // getter function (kept Const)
{
	// Function getX() returns the value of the xcoordinate
	// This function does not modify any member variable
	return m_x;
}

inline double Point::Y() const // getter function (kept Const)
{
	// Function getX() returns the value of the xcoordinate
	// This function does not modify any member variable
	return m_y;
}
#endif // !Point_HPP
