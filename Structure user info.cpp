#include<iostream>
#include<string.h>
using namespace std;
struct employee{
	string FirstName;
	string LastName;
	string DOB;
	string city;
	string phone_no;
}emp;
int main()
{
	cout<<"Enter First Name: ";getline(cin,emp.FirstName);
	cout<<"Enter Last Name: ";getline(cin,emp.LastName);
	cout<<"Enter DOB: ";getline(cin,emp.DOB);
	cout<<"Enter City: ";getline(cin,emp.city);
	cout<<"Enter Phone Number: ";getline(cin,emp.phone_no);
	system("cls");
	cout<<"User Information\n";
	cout<<emp.FirstName<<endl;
	cout<<emp.LastName<<endl;
	cout<<emp.DOB<<endl;
	cout<<emp.city<<endl;
	cout<<emp.phone_no<<endl;
	return 0;
}

