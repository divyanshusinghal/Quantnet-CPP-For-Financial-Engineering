/*
* This is a source File containing the implementation of
* constructor, member variables and functions
* for the class Point. (Functions updated to test function overloading)
*/

#include"Point.hpp" // includes the header file containing the declarations

Point::Point() :m_x(0.0), m_y(0.0)
{
	// Default constructor initializing the value of x and y coordinate to 0.0.
	//cout << "Default constructor called" << endl;
}

Point::Point(const double& val_x, const double& val_y) : m_x(val_x), m_y(val_y)
{
	//Constructor that that accepts x- and y-coordinates, (no set function required with this one)
}

Point::Point(const Point& refptr) : m_x(refptr.m_x), m_y(refptr.m_y)
{
	//Constructor created using copy constructor
}
Point::~Point()
{
	// Deconstructor printing the below message on the deallocation of the memory to object of Point
	//cout << "Point Deconstructor called" << endl;
}

string Point::ToString() const //returns a string description of the point. 
{
	// Function ToString  returns a string description of the point.
	// Output format:  ?Point(x.x, y.y)?
	// Function ToString does not modify any member variable
	// This function returns the std::string class as return type.

	stringstream xstring; // String object xstring created to store the value of x
	xstring << m_x; // Stringstream object store y as content.
	string xstr = xstring.str(); // stream converted to string object and stroed in xstr

	stringstream ystring; // String object ystring created to store the value of y
	ystring << m_y;  //Constructs a stringstream object with a copy of y as content.
	string ystr = ystring.str(); // stream converted to string object and stored in ystr

	//below operator concatenates various strings to return the output ?Point(x.x, y.y)?
	string ret_str = "Point(" + xstr + "," + ystr + ")";
	return ret_str;
}

double Point::Distance()
{
	// Function DistanceOrigin calculates the distance of the point from the origin (0, 0).
	return sqrt((m_x * m_x) + (m_y * m_y));
}

double Point::Distance(Point& p) const
{
	// Function Distance calculates the distance of this point from the another point "p".
	return sqrt(((m_x - p.m_x) * (m_x - p.m_x)) + ((m_y - p.m_y) * (m_y - p.m_y)));
}
