#include<iostream>
using namespace std;
int main(){
	int x = 54;
	int *ptr1;
	float y = 78.69;
	float *ptr2;
	ptr1 = &x;
	ptr2 = &y;
	cout<<"Value of x is: "<<*ptr1<<endl;
	cout<<"Address of x is: "<<ptr1<<endl;
	cout<<"Value of y is: "<<*ptr2<<endl;
	cout<<"Address of y is: "<<ptr2<<endl;
	return 0 ;
}

