#include<iostream>
#include<cmath>
using namespace std;
double areaCircle()
{
	double r;
	cout<<"Enter Radius Of a Circle: ";
	cin>>r;
	double area = M_PI*r*r;
	return area;
}

int main()
{
	double area = areaCircle();
	cout<<"Area of Circle is: "<<area;
	return 0;
}

