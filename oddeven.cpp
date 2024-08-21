#include<stdio.h>
void display(int i, char a)
{
	printf("I am in Display");
	printf("My no is %d and its type is %c", i, a);
}
void odd(int i)
{
	printf("I am in Odd");
	if(i%2!=0)
	{
	
	display(i, 'o');
}
}
void even(int i)
{
	printf("I am in even");
    if(i%2==0)
    
	display(i, 'e');	
}

int main (){
	int i;
	printf("Enter any num= ");
	scanf("%d",&i);
	odd(i);
	even(i);
	return 0;
}
