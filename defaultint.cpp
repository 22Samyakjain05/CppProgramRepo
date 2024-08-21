#include<iostream>
using namespace std;
class student
{
	public:
	int a;
	char c;
	student();
	student(int a, char s='k');
};


student::student()
{
a=10;
c='m';}

student::student(int e, char s)
{
	a=e;
	c=s;
}


int main()
{
	int a;
	cout<<a<<"\n";
	
	float b;
	cout<<b<<"\n";
	
	char c;
	cout<<c<<"\n";
	
	bool d;
	cout<<d<<"\n";
	
	student s(35, 'x');
	cout<<"data member is "<< s.a <<"and the second is "<< s.c <<"\n";
	return 0;
	
	
}
