
// Function without arguement without return value

#include<iostream>
#include<conio.h>
using namespace std; 
void add(); // function declaration
void sub();
void sub() // function definition
{
	int a, b;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;	
	cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b;
}
void add() // function definition
{
	int a, b;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;	
	cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
	sub();
}
	
int main()
{
	system("cls");
	add();//function calling
	getch();
	return 0;
}

/*
	function is 4 types
		1. Function without arguement without return value
		2. Function without arguement with return value
		3. Function with arguement without return value
		4. Function with arguement with return value
*/



