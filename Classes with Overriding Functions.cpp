#include<iostream>
using namespace std;
class animal{
	public:
		void sound(void){
			cout<<"\n\tThis the sound Function";
		}
};
class dog : public animal{
	public:
		void sound(void){
			cout<<"\n\tOverriiding in Dog Derived Class:\n\t\tBark\tBark";
		}
};
class cat : public animal{
	public:
		void sound(void){
			cout<<"\n\tOverriding in Cat Derived Class:\n\t\tMeow\tMeow";
		}
};
int main(){
	animal obj;
	cout<<"\n\n\tCalling function in Base Class Animal";obj.sound();
	dog obj1;
	cout<<"\n\n\tCalling function in Derived Class Dog";obj1.sound();
	cat obj2;
	cout<<"\n\n\tCalling function in Derived Class Cat";obj2.sound();
}

