/*
 * Point.hpp
 *
 *  Created on: Nov 17, 2024
 *      Author: Turbo
 */

#ifndef POINT_HPP_
#define POINT_HPP_
#include <iostream>

using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int,int);
	int operator-(Point const& a);
	bool operator==(Point const& a) const;
	bool operator!=(Point const& a) const;
	Point operator/(Point const& a);
    friend ostream& operator<<(ostream& os, const Point& dt);
};

#endif /* POINT_HPP_ */
