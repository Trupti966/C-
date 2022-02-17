
//**********------- IF-Else --------------*****************

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
	cout<<endl;
	cout<<"----------------------------\n";
	cout<<"Total average mark =     "<<avg;
	
	if(avg>=90)
	{
		cout<<"\nGrade A\n";
	}
	else if(avg>=80 && avg<90)
	{
		cout<<"\nGrade B\n";
	}
	else if(avg>=70 && avg<80)
	{
		cout<<"\nGrade C\n";
	}
	else if(avg>=60 && avg<70)
	{
		cout<<"\nGrade D\n";
	}
	else if(avg>=50 && avg<60)
	{
		cout<<"\nGrade E\n";
	}
	else
	{
		cout<<"\nGrade F\n";
	}
	getch();
	
	return 0;
}
