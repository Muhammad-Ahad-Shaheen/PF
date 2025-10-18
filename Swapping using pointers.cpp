#include<iostream>
using namespace std;
int main(){
	float num1,num2;
	float *ptr1,*ptr2;
	ptr1 = &num1;
	ptr2 = &num2;
	*ptr1 =32.78;
	*ptr2 = 56.12;
	cout<<"1st Number is: "<<*ptr1<<endl;
	cout<<"2nd Number is: "<<*ptr2<<endl;
	float temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	
	cout<<"After Swapping"<<endl;
	cout<<"1st Number is: "<<*ptr1<<endl;
	cout<<"2nd Number is: "<<*ptr2<<endl;
	return 0;
}


