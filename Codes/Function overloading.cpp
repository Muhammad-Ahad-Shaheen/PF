#include<iostream>
#include<cmath>
using namespace std;
float area(float side){
	float square_area =side * side;
	return square_area;
}
float area(float length,float width){
	float rectangle_area = length * width;
	return rectangle_area;
}
double area(double radius){
	double circle_area = M_PI*radius*radius;
	return circle_area;
}
int main(){
	float side, length, width;
	double radius;
	cout<<"\n\n\tEnter Side Of A Square: ";cin>>side;
	cout<<"\tEnter Length of Rectangle: ";cin>>length;
	cout<<"\tEnter Width of Rectangle: ";cin>>width;
	cout<<"\tEnter The Radius of Circle: ";cin>>radius;
	cout<<"\n\n\tArea of Square is: "<<area(side)<<endl;
	cout<<"\tArea of Rectangle is: "<<area(length,width)<<endl;
	cout<<"\tArea of Circle is: "<<area(radius)<<endl;
	return 0;
}

