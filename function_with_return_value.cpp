/*
//Function without arguement with return value

#include<iostream>
#include<conio.h>
using namespace std;

int add(); // function declaration

int add() // function definition
{
	int a, b;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;	
	//cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
	int sum=a+b;
	return(sum);	
}
	
int main()
{
	system("cls");
	int s=add();//function calling
	cout<<"Sum is "<<s;
	getch();
	return 0;
}
*/

//OR

#include<iostream>
#include<conio.h>
using namespace std;

int add(); // function declaration

int add() // function definition
{
	int a, b;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;	
	//cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
	//int sum=a+b;
	return(a+b);	
}
	
int main()
{
	system("cls");
	int s=add();//function calling
	cout<<"Sum is "<<s;
	getch();
	return 0;
}
