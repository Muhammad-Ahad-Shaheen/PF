#include<iostream>
using namespace std;
void add(int arr[5],int size){
	
	int *ptr= arr;
	cout<<"Printing Array after adding 10 Using Pointer\n";
	for(int i =0;i<5;i++){
	*(ptr+i)+=10;
	cout<<*(ptr+i)<<endl;
	}
	
}
int main(){
	int arr[5] = {34,56,69,98,101};
	add(arr,5);
	return 0;
}

