#include<iostream>
using namespace std;
int elg(int age){
	if(age>=18){
		cout<<"You are Adult and Eligible to Vote.\n";
	}
	else if(age<18){
		cout<<"You are Minor and not Eligible to Vote.\n";
	}
	else{
		cout<<"Wrong Input.\n";
	}
}
int main(){
	int age;
	cout<<"Enter your Age: ";
	cin>>age;
	elg(age);
	return 0;
}
