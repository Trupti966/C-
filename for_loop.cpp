/*************************LOOP************************************
	
	1-> for loop
	2-> while loop
	3-> do-while loop

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	system("cls");
	int counter;
	for(counter=1;counter<=10;counter++) // condition is check during entry time.
	{
		if(counter==7)
		{
			continue;
		}
		cout<<counter<<"-"<<"Truptimayee Barik\n";
	}
	
	cout<<"******************************************"<<endl;
	
	int c1=1;
	while(c1<=10) // condition is checked during entry time.
	{
		if(c1==4)
		{
			c1++;
			continue;
			
		}
		cout<<c1<<"-"<<"Trupti\n";
		c1++;
	}
	
	cout<<"******************************************"<<endl;
	
	int c2=1;
	do{
		if(c2==3)
		{
			c2++;
			continue;
			
		}
		cout<<c2<<"-"<<"Truptimayee"<<endl;
		c2++;
	}while(c2<=10); //condition is checked during exit time.
	
	getch();
	return 0;
}
