#include<iostream>
using namespace std;
double calc(double num1,char opp,double num2){
	double result;
	if(opp=='+'){
		result = num1 + num2;
	}
	else if(opp == '-'){
		result = num1-num2;
	}
	else if(opp =='/'){
		if(num2!=0){
			result = num1/num2;
		}
		else{
			cout<<"Denominator cannot be 0.\n";
			exit(0);
		}
	}
	else if(opp=='*'){
		result = num1*num2;
	}
	else{
		cout<<"Wrong Operator!!\n";
		exit(0);
	}
	return result;
}
int main()
{
	double num1,num2;
	char opp;
	cout<<"Enter First Number: ";
	cin>>num1;
	cout<<"Enter an Operator('+','-','/','*'): ";
	cin>>opp;
	cout<<"Enter Second Number: ";
	cin>>num2;
	double result = calc(num1,opp,num2);
	cout<<"The result is: "<<result<<endl;
	return 0;
}
