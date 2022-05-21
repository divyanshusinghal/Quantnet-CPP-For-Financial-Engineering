/*
* Question 2.5 - Exercise 6
* This header file Circle.hpp contains the declaration of the Circle Class.
*/

#ifndef Circle_HPP
#define Circle_HPP

#include<iostream> //cout, cin
#include<string> //string, sstring
#include<sstream>  //stringstream

#include"Point.hpp" //Circle class uses Point class
using namespace std;

class Circle
{
private:
	double m_radius; //stores the radius of the circle (in units)
	Point center; //stores the coordinates of the center of the cirlce

public:
	//Constructors
	Circle(); //default constructor
	Circle(double &rad,const Point &centerpoint); //Constructor with arguements initializing the private variables
	Circle(const Circle &circ); //Constructor creating using copy constructor
	
	//Destructor
	~Circle();

	//Getter Functions
	double Radius() const; //Returns the radius of the circle
	Point Center() const; // Returns the coordinates of the center of the circle

	//Setter Functions
	void Radius(double &rad); //sets the radius of the circle
	void Center(const Point& cent); //sets the center of the circle

	//Member Functions
	double Diameter() const; //function returns the diameter of the circle
	double Area() const; //function returns the area of the circle
	double Circumference() const; //Function returns the circumference of the circle

	string ToString() const; //function returns the string description of the Circle
};


#endif // !Circle_HPP
