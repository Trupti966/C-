#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int day;
	cout<<"\nEnter the day number: ";
	cin>>day;
	switch(day)
	{
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tueday";
			break;
		case 3:
			cout<<"Wednessday";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
		default:
			cout<<"Invalid day.........please enter the number between 1 to 7 only";
	
	}
	getch();
	return 0;
}
