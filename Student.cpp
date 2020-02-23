

#include"Point.h"
#include<iostream>
using namespace std;

Point::Point(double x, double y)   //这里到底要不要和声明一样？Point(double x=0, double y=0);
{
	m_x = x;
	m_y = y;
}

void Point::setxy(double j, double k)
{
	m_x = j;
	m_y = k;
}

Point Point::operator+(Point &c)
{
	Point s;
	s.m_x = m_x + c.m_x;
	s.m_y = m_y + c.m_y;
	return s;
}

void Point::show()
{
	cout << "横坐标是" << m_x << endl;
	cout << "纵坐标是" << m_y << endl;
}

Point::~Point()
{
	cout << "再见！" << endl;
}