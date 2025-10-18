#include<iostream>
#include<string.h>
using namespace std;
struct employee{
	string FirstName[10];
	string LastName[10];
	string Designation[10];
	string Salary[10];
	string DOB[10];
	string city[10];
}emp;
int main()
{
	for(int i=0;i<10;i++)
	{
		cout<<"Enter First Name of Employee "<<i +1<<endl;
		getline(cin,emp.FirstName[i]);
		cout<<"Enter Last Name of Employee "<<i +1<<endl;
		getline(cin,emp.LastName[i]);
		cout<<"Enter Designation of Employee "<<i +1<<endl;
		getline(cin,emp.Designation[i]);
		cout<<"Enter Salary of Employee "<<i +1<<endl;
		getline(cin,emp.Salary[i]);
		cout<<"Enter DOB of Employee "<<i +1<<endl;
		getline(cin,emp.DOB[i]);
		cout<<"Enter City of Employee "<<i +1<<endl;
		getline(cin,emp.city[i]);
	}
	system("cls");
	for(int i=0;i<10;i++)
	{
		cout<<"Employee "<<i+1<<" Information";
		cout<<emp.FirstName[i]<<endl;
		cout<<emp.LastName[i]<<endl;
		cout<<emp.Designation[i]<<endl;
		cout<<emp.Salary[i]<<endl;
		cout<<emp.DOB[i]<<endl;
		cout<<emp.city[i]<<endl;
	}
	return 0;
}
