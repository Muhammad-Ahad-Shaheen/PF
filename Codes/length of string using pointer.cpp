#include<iostream>
#include<string>
using namespace std;
int length(const string *ptr){
	return ptr->length();
}
int main(){
	string line;
	string *ptr = &line;
	cout<<"Enter a String: ";
	getline(cin,*ptr);
	
	cout<<"Length of the string is: "<<length(ptr);
	return 0;
}

