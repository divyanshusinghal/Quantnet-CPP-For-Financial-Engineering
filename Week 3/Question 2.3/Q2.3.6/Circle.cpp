/*
* Question 2.5 - Exercise 6
* Circle.cpp contains the implementation of the class Circle, 
* its constructors, member variables and functions
*/

//Please do not change the order of the directives
#ifndef _USE_MATH_DEFINES // To enable Microsoft’s version of the math library for PI function named M_PI
#define _USE_MATH_DEFINES
#include<cmath>
#endif

#include"Point.hpp" //contains definition of point
#include"Circle.hpp" //contains definitions of circle

#include<iostream> //cout, cin
#include<string> //string, sstring
#include<sstream>  //stringstream
using namespace std;

Circle::Circle(): m_radius(0.0)
{
	//default constructor	
}

Circle:: Circle(double& rad, const Point& centerpoint)
{
	//Constructor with arguements initializing the private variables
	m_radius = rad; //assigns the radius of the circle
	center = centerpoint; //assigns the center of the circle using copy constructor method
}
Circle::Circle(const Circle& circ)
{
	//Constructor creating using copy constructor
	m_radius = circ.m_radius;
	center = circ.center;
}
//Destructor
Circle::~Circle()
{
	//No implementation provided
}

//Getter Functions
double Circle::Radius() const //Returns the radius of the circle
{
	return m_radius; 
}

Point Circle::Center() const // Returns the coordinates of the center of the circle
{
	return center;
}
//Setter Functions
void Circle::Radius(double& rad) //sets the radius of the circle
{
	m_radius = rad;
}
void Circle::Center(const Point& cent) //sets the center of the circle
{
	center = cent;
}

//Member Functions
double Circle::Diameter() const //function returns the diameter of the circle
{
	return 2 * m_radius; //Diameter = 2 * Radius
}

double Circle::Area() const //function returns the area of the circle
{
	return M_PI * m_radius * m_radius; //Area = PI*Radius*Radius
}

double Circle::Circumference() const //Function returns the circumference of the circle
{
	return M_PI * Diameter(); //Formula for Circumference is 2*PI*R or PI*D
}

string Circle::ToString() const //function returns the string description of the Circle
{
	stringstream rad; // String object rad created to store the value of radius
	rad << m_radius; // Stringstream object stores radius as content.
	string radius = rad.str(); // stream converted to string object and stored in radius

	return ("Radius: " + radius + ", Center: " + center.ToString());
}