

#include"Point.h"
#include<iostream>
using namespace std;

Point::Point(double x, double y)   //���ﵽ��Ҫ��Ҫ������һ����Point(double x=0, double y=0);
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
	cout << "��������" << m_x << endl;
	cout << "��������" << m_y << endl;
}

Point::~Point()
{
	cout << "�ټ���" << endl;
}