#include<iostream>
using namespace std;

class Customer{
	char name;
	float accountBalance;
	public:
	void SetData(Customer c[]);
	void GetData(Customer c[]);
	returnObj
};

void Customer:: SetData(Customer c[]){
	int i;
	for(i=0;i<2;i++){
	
	cout<< "Enter your name= ";
	cin>> c[i].name;
	cout<< "Enter your account balance= ";
	cin>> c[i].accountBalance;
	}
}

void Customer:: GetData(Customer c[]){
	int i;
	for(i=0;i<2;i++){
	
	cout<< "Your name is: " << c[i].name << "and your account balance is: " << c[i].accountBalance;
	}
}


int main(){
	Customer c[2];

	c[0].SetData(c);
	c[0].GetData(c);
	
}
