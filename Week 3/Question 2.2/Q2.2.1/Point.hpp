/* 
* Exercise 1: Point Class
* This header file Point.hpp contains the declaration of the Point Class
*/

#ifndef Point_HPP
#define Point_HPP

#include<iostream> //cout, cin
#include<string> //string, sstring
#include<sstream>  //stringstream

using namespace std; 

class Point //definition of class Point starts here
{
private: // x and y coordinates are private. Only member functions can access them.
	double m_x; // declaration of X coordinate
	double m_y; // declaration of Y coordinate

public: //member functions and constructors are made public for user to access

	//Constructor and Destructor
	Point(); //Default Constructor
	~Point(); //Destructor

	// Getter Functions

	//note: getX and getY to only return the values (hence made CONST)
	double getX() const; // Getter function for X
	double getY() const; // Getter function for Y

	//Setter Functions
	void setX(double xval); // Setter function for X
	void setY(double yval); // Setter function for Y

	//Defintion of ToString function (made CONST since they only return value, but do not modify)
	string ToString() const; // returns a string description of the point
};
#endif // !Point_HPP
