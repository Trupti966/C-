#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num;
	
	label:
	cout<<"\nEnter the number Greaterthan 50: ";
	cin>>num;
	if(num>50)
	{
		cout<<"\nVery Good, You did it.....";
	}
	else
	{
		cout<<"\nYou did not enter the number greater than 50";
		goto label;
	}
	getch();
	return 0;
}
