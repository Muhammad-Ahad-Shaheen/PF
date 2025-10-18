#include<iostream>
using namespace std;
int factorial()
{
	int num1;
	cout<<"Enter Number U want Factorial of: ";
	cin>>num1;
	int fact=1;
	for(int i=1;i<=num1;i++){
		fact *=i;
	}
	return fact;
}

int main()
{
	int result=factorial();
	cout<<"Fatcorial is: "<<result;
	return 0;
}

