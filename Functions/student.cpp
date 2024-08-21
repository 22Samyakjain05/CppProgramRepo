#include<iostream>
using namespace std;

class student{
	char name;
	int marks;
	public:
	void setdata();
	void compareMarks( student b);
	void displayData(student s1, student s2);
};

void student:: displayData(student s1, student s2){
	cout<< "First student name is= " <<s1.name << "and marks is= "<< s1.marks;
	cout<< "second student name is= " <<s2.name << "and marks is= "<< s2.marks;
}

void student:: setdata(){
	
	cout<< "Enter the student name : ";
	cin>> name;
		cout<< "Enter the marks : ";
	cin>> marks;
}

void student:: compareMarks (student b)
{
	if(marks==b.marks)
	{
		cout<< "Marks are equal";
	}else if(marks<b.marks)
	{
		cout<< b.name<< "stands first";
	}
	else
	{
     	cout<< name<< "stands first";	
	}
}
int main(){
	student s1, s2;
	s1.setdata();
	s2.setdata();
	s1.compareMarks( s2);
	s1.displayData(s1, s2);
	return 0;
}


