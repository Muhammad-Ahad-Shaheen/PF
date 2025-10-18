#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int random ;
	srand(time(0));
	random= rand() %100 ;
	cout<<"\t"<<random;
	return 0;
}
