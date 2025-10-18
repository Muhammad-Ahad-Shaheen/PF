#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[100];
	char s2[100];
	cout<<"\tEnter string 1. ";
	cin.getline(s1,100);
	cout<<"\tEnter string 2. ";
	cin.getline(s2,100);
	int len1,len2;
	len1=strlen(s1);len2=strlen(s2);
	cout<<"\tLength of 1st string: "<<len1<<endl;
	cout<<"\tLength of 2nd string: "<<len2<<endl;
	if(len1==len2){
		cout<<"\tLength of both strings is equal.\n";
	}
	else
	cout<<"\tLength of both strings is not equal.\n";
	return 0;
}

