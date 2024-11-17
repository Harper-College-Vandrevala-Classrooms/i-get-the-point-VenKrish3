/*
 * Point.cpp
 *
 *  Created on: Nov 17, 2024
 *      Author: Turbo
 */
#include <iostream>
#include <cmath>
#include "Point.hpp"


Point::Point(int x,int y)
{
	this->x = x;
	this->y = y;
}

int Point::operator-(Point const& a)
{
	int n = this->x - a.x;
	int z = this->x - a.x;
	if(n == 0 || z == 0)
		return 0;
	return sqrt(pow(n, 2) + pow(z, 2));
}
bool Point::operator==(Point const& a) const
{
	if(this->x == a.x)
	{
		return (this->y == a.y);
	}
	else
		return false;
}
bool Point::operator!=(Point const& a) const
{
	if(this->x == a.x || this->x != a.x)
	{
		return (this->y != a.y);
	}
	else
		return false;
}
Point Point::operator/(Point const& a)
{
	int n = (this->x + a.x)/2;
	int z = (this->y + a.y)/2;
	Point temp(n,z);
	return temp;
}

ostream& operator<<(ostream& os, const Point& pt)
{
    os << "(" << pt.x << ", " << pt.y << ")";
    return os;
}



