#include<iostream>
using namespace std;

int fibseries(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return fibseries(n-1)+fibseries(n-2);
	}
}

int main()
{
	int n;
	cout<<"Enter the fibonacci series no. to print: ";
	cin>>n;
	fibseries(n);
}
