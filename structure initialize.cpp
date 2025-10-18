#include<iostream>
#include<string.h>
using namespace std;
struct employee{
	string FirstName;
	string LastName;
	string Designation;
	string Salary;
	string DOB;
	string city;
};
int main()

{
	employee emp;
	emp ={"Faizan", "Muzaffar", "Owner", "80,000", "25/09/2006", "Gujranwala"};
	cout<<emp.FirstName<<endl;
	cout<<emp.LastName<<endl;
	cout<<emp.Designation<<endl;
	cout<<emp.Salary<<endl;
	cout<<emp.DOB<<endl;
	cout<<emp.city;
	return 0;
}

