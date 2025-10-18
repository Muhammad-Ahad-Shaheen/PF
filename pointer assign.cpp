#include<iostream>
using namespace std;
int main(){
	float num1,num2,num3;
	float *ptr1,*ptr2,*ptr3;
	ptr1 = &num1;
	ptr2 = &num2;
	ptr3 = &num3;
	*ptr1 =32.78;
	*ptr2 = 56.12;
	*ptr3 = 89.47;
	float sum;
	sum = *ptr1+*ptr2+*ptr3;
	cout<<"Sum is: "<<sum<<endl;
	return 0;
}


