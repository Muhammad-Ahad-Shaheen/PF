#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[100];
	char s2[100];
	cout<<"\tEnter 1st string: ";cin>>s1;
	cout<<"\tEnter 2nd string: ";cin>>s2;
	cout<<"\tLength of Strings"<<endl;
	int len1,len2;
	len1 = strlen(s1);
	len2 = strlen(s2);
	cout<<"\tLength of 1st string = "<<len1<<endl;
	cout<<"\tLength of 2nd string = "<<len2<<endl;
	cout<<"\tComparison.\n";
	int cmp;
	cmp= strcmp(s1,s2);
	if(cmp==0)
	cout<<"\tBoth strings are Equal.\t";
	else if(cmp<0)
	cout<<"\tString 1 is greater than String 2.\n";
	else
	cout<<"\tConcatenation\n";
	strcat(s1,s2);
	cout<<"\tAfter concatenation of both strings: "<<s1<<endl;
	cout<<"\tString 2 is greater than String 1.\n";
	cout<<"\tCopying.\n";
	cout<<"\tString 1 before copying: "<<s1<<endl;
	cout<<"\tString 2 before copying it to String 1: "<<s2<<endl;
	string copy;
	copy =strcpy(s1,s2);
	cout<<"\tAfter copying string 2 in string 1: "<<s1;
}
