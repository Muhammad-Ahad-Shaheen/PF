#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int random,num ;
	srand(time(0));
	random= rand() %11 ;
	cout<<"Guess a number from 0-10.\n";
	cin>>num;
	if(num==random){
		cout<<"Your guess is correct.\nRandom generated numder is: "<<random;
	}
	else
	{
		cout<<"Your guess is wrong.\nRandom generated number is: "<<random;
	}
	return 0;
}
