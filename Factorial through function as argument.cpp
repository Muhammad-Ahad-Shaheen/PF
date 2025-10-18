#include<iostream>
int factorial(int);
using namespace std;
int main()
{
	int num1;
	cout<<"Enter Number U want Factorial of: ";
	cin>>num1;
	int fact=factorial(num1);
	cout<<"Fatcorial of "<<num1<<" is: "<<fact;
	return 0;
}
int factorial(int x)
{
	int fact=1;
	for(int i=1;i<=x;i++){
		fact *=i;
	}
	return fact;
}
