#include<iostream>
using namespace std;
void print(int x){
	cout<<"Value of integers is: "<<x<<endl;
}
void print(int x,float y){
	cout<<"Value of integer is: "<<x<<endl;
	cout<<"Value of float is: "<<y<<endl;
}
void print(int x, float y, char z){
	cout<<"Value of integer is: "<<x<<endl;
	cout<<"Value of float is: "<<y<<endl;
	cout<<"Value of character is: "<<z<<endl;
}
int main()
{
	int x;
	float y;
	char z;
	cout<<"Enter an Integer: ";
	cin>>x;
	cout<<"Enter a Float value: ";
	cin>>y;
	cout<<"Enter a Character: ";
	cin>>z;
	cout<<"Calling First Function.\n";
	print(x);
	cout<<"Calling Second Function.\n";
	print(x,y);
	cout<<"Calling Third Function.\n";
	print(x,y,z);
	return 0;
}
