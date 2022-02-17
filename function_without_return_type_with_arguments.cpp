// Function with arguement without return value

#include<iostream>
#include<conio.h>
using namespace std;
void add(int,int); // function declaration

void add(int p, int q) // function definition
{
		
	cout<<"Sum of "<<p<<" and "<<q<<" is "<<p+q;
}
	
int main()
{
	system("cls");
	int a, b;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;
	add(a,b);//function calling
	getch();
	return 0;
}
