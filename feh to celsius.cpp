#include<iostream>

using namespace std;

int main (){
	
	int feh, celsius;
	
	cout << "Enter the fehrenheit temperature= ";
	cin >> feh;
	
	celsius= (feh-32) * 5/9;
	cout << "celsius= " << celsius << "\n";
	
	
	
	
	return 0;
}
