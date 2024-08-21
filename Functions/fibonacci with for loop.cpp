#include<iostream>
using namespace std;

void fibonacci(int n, int previous, int next){
	
	int i, a3;

cout<<previous<<"\n";
cout<<next<<"\n";	
for(i=0;i<n;i++)
{
	a3 = previous + next;
	cout<<a3<<"\n";
	previous = next;
	next = a3;
	
}
}
int main()
{
	int n;
int previous = 0;
int next = 1;
cout<<"Enter your no.: ";
cin>>n;

fibonacci(n, previous, next);


return 0;
}
