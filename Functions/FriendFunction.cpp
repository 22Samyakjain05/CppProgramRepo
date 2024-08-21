#include<iostream>
using namespace std;

class Clerk;
class Manager{
	int taxAmount;
	public:
		void setTax()
		{
			taxAmount=200;
		}
		friend void displayTaxAmount(Manager m, Clerk c);
};

class Clerk{
	int taxAmount;
	public:
		friend void Manager::setTax();
		friend void displayTaxAmount(Manager m, Clerk c);
};


void displayTaxAmount(Manager m, Clerk c){
	
	cout<< "Manager Tax Amount is " << m.taxAmount;
	cout<< "Clerk Tax Amount is " << c.taxAmount;
}


int main()
{
	Manager m;
	Clerk c;
	m.setTax();
	m.setTax();
	displayTaxAmount(m,c);
}
