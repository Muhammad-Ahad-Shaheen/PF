#include<iostream>
#include<cmath>
double areaCircle(double);
using namespace std;
int main()
{
	double radius;
	cout<<"Enter Radius Of a Circle: ";
	cin>>radius;
	double area=areaCircle(radius);
	cout<<"Area of Circle is: "<<area;
	return 0;
}
double areaCircle(double r){
	double area = M_PI*r*r;
	return area;
}
