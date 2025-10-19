#include<iostream>
using namespace std;
void absolute(float x){
	cout<<"Value of Float: "<<x<<endl;
}
void absolute(int y){
	cout<<"Value of an Integer: "<<y<<endl;
}
int main()
{
	float x; int y;
	cout<<"Enter A Float Number: ";
	cin>>x;
	cout<<"Enter an Integer: ";
	cin>>y;
	cout<<"Calling 1st Function.\n";
	absolute(x);
	cout<<"Calling 2nd Function.\n";
	absolute(y);
	return 0;
}
