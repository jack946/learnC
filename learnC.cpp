#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n= 0,i=0,s=0;  //n用于计划输入数目，i为实际输入数目,s用于求和。
	cin >> n;
	int *p = new int[n];
	int j = 0;
	
	
		while (cin >> *(p + j)&&j<n)
		{
			
			s += *(p + j);	
			j++;
		}
	
	cout << s << endl;
	delete []p;
	return 0;
}