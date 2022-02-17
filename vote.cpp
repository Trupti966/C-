#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	system("cls");
	int age;
	cout<<"\nEnter Your Age";
	cin>>age;
	if(age>=18)
	{
		cout<<"\nYes, You are elegible for VOTE!....";
	}
	else
	{
		cout<<"\nNo, You are not elegible for VOTE!....";
	}
	getch();
	return 0;
}
