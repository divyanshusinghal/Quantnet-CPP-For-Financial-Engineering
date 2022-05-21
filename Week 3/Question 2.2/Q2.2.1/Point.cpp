/*
* Source File that includes the implementation of
* constructor, member variables and functions
* for the class Point
*/

#include"Point.hpp" // includes the header file containing the declarations

Point::Point() :m_x(0.0), m_y(0.0)
{
	// Default constructor initializing the value of x and y coordinate to 0.0.
}

Point::~Point()
{
	// Deconstructor printing the below message on the deallocation of the memory to object of Point
	cout << "Deconstructor called";
}

void Point::setX(double xval) //setter function
{
	//Function setX() sets the value of member variable x to xval.
	//xval is provided as arguement to setX
	m_x = xval;
}

void Point::setY(double yval) //setter function
{
	// Function setY() sets the value of member variable y to yval.
	// yval is provided as arguement to setY
	m_y = yval;
}

double Point::getX() const // getter function (kept Const)
{
	// Function getX() returns the value of the xcoordinate
	// This function does not modify any member variable
	return m_x;
}

double Point::getY() const // getter function (kept Const)
{
	// Function getX() returns the value of the xcoordinate
	// This function does not modify any member variable
	return m_y;
}


string Point::ToString() const //returns a string description of the point. 
{
	// Function ToString  returns a string description of the point.
	// Output format:  “Point(x.x, y.y)”
	// Function ToString does not modify any member variable
	// This function returns the std::string class as return type.

	//
	stringstream xstring; // String object xstring created to store the value of x
	xstring << m_x; // Stringstream object store y as content.
	string xstr = xstring.str(); // stream converted to string object and stroed in xstr

	stringstream ystring; // String object ystring created to store the value of y
	ystring << m_y;  //Constructs a stringstream object with a copy of y as content.
	string ystr = ystring.str(); // stream converted to string object and stored in ystr

	//below operator concatenates various strings to return the output “Point(x.x, y.y)”
	string ret_str = "Point(" + xstr + "," + ystr + ")";
	return ret_str;
}