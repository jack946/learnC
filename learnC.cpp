#include<iostream>
#include<stdio.h>
#include"circle.h"
using namespace std;
int main()
{
	circle obj1(5),obj2(obj1);
	
	cout << obj2.out() << endl;
	return 0;
}