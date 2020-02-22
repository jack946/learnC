#include<iostream>
#include<stdio.h>
#include"Point.h"
using namespace std;
int main()
{
	Point a[3];
	Point* p = a;
	(p+1)->setxy(6.6, 8.8);
	(p + 1)->show();
	return 0;
}