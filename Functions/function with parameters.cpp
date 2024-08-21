#include<iostream>
using namespace std;

void displayNum(int n1, float n2){
	cout<< "The int number is " << n1 << "\n";
	cout<< "The float number is " << n2;
}

int main (){
	int num1 = 22;
	float num2 = 2.2;
	
	displayNum(num1, num2);
	return 0;
}
