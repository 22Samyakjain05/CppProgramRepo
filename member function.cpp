#include<iostream>

using namespace std;

class temp
{
	public:
	int ftemp, celsius;
	public:
	
	void ftoc( );
	void ftoc(int a);
	
	};
	
	void temp :: ftoc( )
	{
		cout << "enter f temp= ";
		cin >> ftemp;
		celsius= (ftemp-32) * 5/9;
	cout << "celsius= " << celsius << "\n";
	}
	
		void temp :: ftoc(int a )
	{
		cout << "enter f temp= ";
		cin >> ftemp;
		celsius= (ftemp-32) * 5/9;
	cout << "celsius= " << celsius << "\n";
	cout<< "standard is "<< a;
	}
	
	int main ()
	{
		temp t;
		t.ftoc();
	cout << "ftemp is = " << t.ftemp << "\n";
	t.ftoc(32);
		return 0;
		 
	}
