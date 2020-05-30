#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	int r[10] = { 1,2,3,4,5,6,7,8,9,10};
	int p;
	cin >> p;
	int* t = new int[p];
	
	for (int i = 0;i <= p-1;i++)
		t[i] = r[i]; 

	for (int j = p;j <= 9;j++)
		r[j - p] = r[j]; 

	for (int m = 0;m <= p - 1;m++)
		r[m+10-p]=t[m];

	for(int k=0;k<=9;k++)
	cout << r[k] << endl;
	
	return 0;
	
}