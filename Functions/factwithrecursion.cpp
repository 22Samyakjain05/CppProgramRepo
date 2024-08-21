#include<iostream>
using namespace std;

int factorial(int n)
{
	int fact;
	if(n==1){
			return 1;
			}
	fact = n*factorial(n-1);
	
		
		
	
	return fact;
}
int main (){
	int n;
	cout<<"Enter yor no.: ";
	cin>>n;
	int fact = factorial(n);
	cout<<fact;
	return 0;
}
