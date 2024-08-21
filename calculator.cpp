#include<iostream>
using namespace std;
int main ()
{
	int a,b;
	char op;
	
	cout<<"Enter first number= ";
	cin>>a;
	
	cout<<"Enter second number= ";
	cin>>b;
	
	cout<<"Enter operator with git data ";
	cin>>op;
	
	switch(op){
		
		case('+'):
		cout<<"Result is= "<<a+b;
		break;
		
		case('-'):
		cout<<"Result is= "<<a-b;
		break;
		
		case('*'):
		cout<<"Result is= "<<a*b;
		break;
		
		case('/'):
		cout<<"Result is= "<<a/b;
		break;
	}
	return 0;
	
}
