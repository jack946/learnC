#pragma once

class Point
{
private:
	double m_x, m_y;

public:
	Point(double x=1, double y=2);
	void setxy(double j, double k);
	Point operator+(Point &c);
	void show();
	~Point();
};
