#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
struct Student{
	string name;
	int RollNo;
	int Age;
	string Class;
	double marks[5];
	double avg;
};
Student info;
void astudents(Student &info)
{
	
	cout<<"Enter student name: ";
	cin>>info.name;
	cout<<"Enter student age: ";
	cin>>info.Age;
	cout<<"Enter student Roll No: ";
	cin>>info.RollNo;
	cout<<"Enter student Class: ";
	cin.ignore();
	getline(cin,info.Class);
}
void dstudents(Student &info)
{
	cout<<setw(10)<<left<<info.name<<"\t";
	cout<<setw(10)<<left<<info.Age<<"\t";
	cout<<setw(10)<<left<<info.RollNo<<"\t\t";
	cout<<setw(10)<<left<<info.Class<<"\t";
	cout<<setw(10)<<left<<info.avg<<"\t";
}
void mstudents(Student &info)
{
	double total=0.0;
		for(int j=0;j<5;j++){
		
		cout<<"Marks of "<<j+1<<" subject: ";
		cin>>info.marks[j];
		total=total + info.marks[j];
	}
	info.avg=(total/5);
}
int main(){
	int student_count;
	cout<<"Enter number of students: ";
	cin>>student_count;
	Student students[student_count];
	for(int i=0;i<student_count;i++){
		system("cls");
		cout<<"Entering Information of "<<i+1<<" student.\n";
		
			astudents(students[i]);
		
	}
	for(int i=0;i<student_count;i++){
		system("cls");
		cout<<"Entering marks of "<<i+1<<" student.\n";
		mstudents(students[i]);
	}
	system("cls");
	cout<<"Displaying the students info.\n";
	cout<<"Student name\tStudent age\tStudent Roll No\t\tStudent Class\tStudents Average Marks\n";
	for(int i=0;i<student_count;i++){
		
		
		dstudents(students[i]);
		cout<<endl;
	}
	return 0;

}

