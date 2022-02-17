#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	system("cls");
	float m1,m2,m3,m4,m5;
	cout<<"\nEnter Marks for mathematics: ";
	cin>>m1;
	cout<<"\nEnter Marks for physics: ";
	cin>>m2;
	cout<<"\nEnter Marks for biology: ";
	cin>>m3;
	cout<<"\nEnter Marks for chemistry: ";
	cin>>m4;
	cout<<"\nEnter Marks for history: ";
	cin>>m5;
	
	float totalObtainedMarks=m1+m2+m3+m4+m5;
	float avg = totalObtainedMarks/5;
	cout<<"----------------------------\n";
	cout<<"Total average mark =     "<<avg;
	
	getch();
	
	return 0;
}
