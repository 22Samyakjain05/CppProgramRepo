#include<iostream>

using namespace std;

int main (){
	
	int a, b;
	cout << "Enter num a = ";
	cin >> a;
	cout << "Enter num b = ";
	cin >> b;
	
	if(a>b)
	{
		cout << "a is larger";
	}
	else if(a<b)
	{
		cout << "b is larger";
	}
	else
	{
		cout << "wrong statement";
	}
	
	return 0;
}
