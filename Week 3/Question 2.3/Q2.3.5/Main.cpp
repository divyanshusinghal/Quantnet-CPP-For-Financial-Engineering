/*
* Question 2.3 - Exercise 5
* This solution contains the implementation of the Point and the Line Class
* Main File has been written to test the implementation of the Line Class
*/

#include"Point.hpp"
#include"Line.hpp"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	double pt1_x, pt1_y, pt2_x, pt2_y;
	cout << "Please enter the start and end point of the line segment." << endl;
	cout << "Please enter the start point (x followed by y coordinates with a space)" << endl;
	cin >> pt1_x >> pt1_y;
	cout << endl << "Please enter the end point (x followed by y coordinates with a space)" << endl;
	cin >> pt2_x >> pt2_y;

	Point startpt(pt1_x, pt1_y); 
	Point endpt(pt2_x, pt2_y);

	Line l1; //Creating an object l1 of the line class

	//Using Setter Functions to set the start and end point of the line segment
	l1.StartPoint(startpt); //Setting the start point of the line using  Using Setter Function
	l1.EndPoint(endpt); //Setting the end of the line using Setter Function

	//Using Getter Functions and the ToString Function from the Point Class
	cout << "Startpoint of the line segment: " << l1.StartPoint().ToString() << endl;
	cout << "End of the line segment: " << l1.EndPoint().ToString() <<endl;

	//Using the ToString function of the LineClass
	cout << l1.ToString() << endl;

	//Calculating the distance betweent the start and the end point of the line
	cout << "Length of the line segment is: " << l1.Length() << endl;

	return 0; //main functions ends here.
}