/*
* Question 2.5 - Exercise 5
* This Cpp file Line.cpp contains the implementation of the LineClass.
* The Line class has a start- and an end-point, hence this class contains 2 Point objects as data members.

* Line class the following functionality:
	**Default constructor (set the points to 0, 0).
	**Constructor with a start- and end-point.
	**Copy constructor.
	**Destructor.
	**Overloaded getters for the start- and end-point.
	**Overloaded setters for the start- and end-point.
	**A ToString() function that returns a description of the line.
	**A Length() function that returns the length of the line.
*/


#include<iostream>
#include<string>
#include"Point.hpp" //including the Header File containing the declaration of the Point class
#include"Line.hpp" //including the Header File containint the dclarations of the Line class

using namespace std;

Line::Line()
{
// Default constructor (set the points to 0, 0).
}

Line::Line(const Point &p1, const Point &p2)
{
	startpt = p1; //Initializes start Point to p1
	endpt = p2; // Initializes end Point to p2
}

Line::Line(const Line &l1) //Copy Constructor defined here
{
	startpt = l1.startpt; //startpoint of new line = startpoint from copied line
	endpt = l1.endpt; //endpoint of new line = endpoint from copied line
}

Line::~Line() //Destructor defined here
{
	//Does Nothing
}

Point Line::StartPoint() const // Getter for Start Point
{
	return startpt; //Returns the startpoint
}

Point Line::EndPoint() const //Getter for EndPoint
{
	return endpt; //Returns the end point
}

void Line::StartPoint(const Point &stpoint) //Setter for Start Point
{
	startpt = stpoint; //assigns the stpoint value to startpt
}
void Line::EndPoint(const Point &endpoint) //Setter for end Point
{
	endpt = endpoint; //assigns the endpoint value to endpt
}

string Line::ToString() const //function that returns a description of the line.
{
	//Description of the start and end point sourced using the ToString function from the Point Class
	string str1 = startpt.ToString(); //stores the string description of start point
	string str2 = endpt.ToString(); //stores the string description of the end point
	return ("Start Point: " + str1 + " End Point: " + str2);
}

double Line::Length() const//A Length() function that returns the length of the line.
{
	Point p1 = startpt;
	Point p2 = endpt;

	return p1.Distance(p2);
}