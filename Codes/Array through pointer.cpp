#include<iostream>
using namespace std;
int main(){
	int arr[5] = {34,56,69,98,101};
	int *ptr= arr;
	cout<<"Printing Array Using Pointer\n";
	for(int i =0;i<5;i++){
		cout<<*(ptr+i)<<endl;
		
	}
	return 0;
}

