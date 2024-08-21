#include<iostream>
using namespace std;

int fibonacci(int n, int previous, int next, int i){
	
	int  a3;
    if(i<n){
	a3 = previous + next;
	cout<<a3<<"\n";
	i=i+1;
	fibonacci(n,next,a3, i);
}else{
	return 1;
}
	
}
int main()
{
	int n;
int previous = 0;
int next = 1;
cout<<"Enter your no.: ";
cin>>n;
cout<<previous<<"\n";
cout<<next<<"\n";

fibonacci(n, previous, next, 0);


return 0;
}
