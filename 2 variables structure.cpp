#include<iostream>
#include<string.h>
using namespace std;
struct name{
	string name;
}n1,n2;
int main()
{
	cout<<"Enter Your Name: ";
	getline(cin,n1.name);
	cout<<"Name using First Object: "<<n1.name<<endl;
	n2=n1;
	cout<<"After copying to the Second object: "<<n2.name;
	return 0;
}

