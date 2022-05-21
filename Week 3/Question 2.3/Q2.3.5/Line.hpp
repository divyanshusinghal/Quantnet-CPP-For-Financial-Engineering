/*
* Question 2.5 - Exercise 5
* This header file Line.hpp contains the declaration of the LineClass.
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

#ifndef LINE_HPP
#define LINE_HPP

#include<iostream>
#include<string>
#include"Point.hpp" //including the Header File containing the declaration of the Point class

using namespace std;

class Line {
private:
	Point startpt; //startpoint of line segment
	Point endpt; //endpoint of line segment

public:

	//Constructors
	Line(); //default constructor (set the points to 0, 0).
	Line(const Point &p1, const Point &p2); // Constructor with a start- and end-point.
	Line(const Line &l1); //Copy constructor.

	~Line(); //Destructor

	//Overloaded getters for the start - and end - point.
	//Added const as getter functions do not change the points of the line segment
	Point StartPoint() const; // Getter for Start Point
	Point EndPoint() const; //Getter for EndPoint

	void StartPoint(const Point &stpoint); //Setter for Start Point
	void EndPoint(const Point &endpoint); //Setter for end Point

	string ToString() const; //function that returns a description of the line.

	double Length() const;//A Length() function that returns the length of the line. 
};


#endif LINE_HPP// !1

