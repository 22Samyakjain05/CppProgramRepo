#include<iostream>
using namespace std;

class BankAccount
{
	char Name;
	int AccNum;
	char AccTyp;
	float Bal;
	public:
		void InitialValue();
		float DepositAmt(int money, int AccNum, float Bal);
		int WithdrawAmt(int money, float Bal, int AccNum);
		void Display(int AccNum);
}

void BankAccount::DepositAmt()
{
	
}

void BankAccount::WithdrawAmt()
{
	
}

void BankAccount::Display()
{
	
}

int main()
{
	cout<<"Enter Details";
	cout<<"*************";
	cout<<"Account No.: ";
	cin>>AccNum;
	cout<<"Name: ";
	cin>>Name;
	cout<<"Account Type: ";
	cin>>AccTyp;
	cout<<"Balance: ";
	cin>>Bal;
}
