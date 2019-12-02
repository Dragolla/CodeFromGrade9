#include "pch.h"
#include <iostream>
using namespace std;
//function prototypes
double calc_volume_cylinder(double);
void volume_cylinder();
void area_circle();
double calc_area_circle(double);

const double pi{ 3.14159 };


double calc_area_circle(double radius) {
	return pi * radius*radius;
}
double calc_volume_cylinder(double radius, double height) {
	//return pi * radius*radius*height;
	return calc_area_circle(radius)*height;
}

int main()
{

	area_circle();
	volume_cylinder();


}
void volume_cylinder() {
	double radius{};
	double height{};
	cout << "\n Enter the radius of the cylinder: ";
	cin >> radius;
	cout << "\n Enter the height of the cylinder: ";
	cin >> height;
	cout << "The volume of the cylinder is: " << calc_volume_cylinder(radius, height) << endl;
}
void area_circle() {
	double radius{};
	cout << " \n Enter the radius of the circle: ";
	cin >> radius;
	cout << "The radius of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}
