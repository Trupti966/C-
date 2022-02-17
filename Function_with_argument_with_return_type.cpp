//Function with arguement with return value

#include<iostream>
#include<conio.h>
using namespace std;
int add(int,int); // function declaration

int add(int p, int q) // function definition
{    
	return p+q;
}
	
int main()
{
	system("cls");
	int a, b;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;
	int sum=add(a,b);//function calling
	cout<<sum;
	getch();
	return 0;
}
