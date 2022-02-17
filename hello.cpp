#include<iostream> // including the library of input/output its including the cin/cout.

#include<conio.h> // including the getch(),system("cls") function.

using namespace std; // its include the cin and cout pre defined function from std file.

int main() // The c++ program always starts with the main() function. and int is the return type.
{
	system("cls"); // its use to clear the screen.....
	
	cout<<"Hello C++ ! \n"; // cout is use to see the output.
	
	getch(); // get a character its use to not stop the program before pressing any key.
	
	return 0; // use to return a zero value not any garbage value.
}

//cin and cout are the objects not variable.

/* if we are not using the namespase then we need to write std in every functions.
 		example---->
 				std::cout<<"Hello Trupti";
 				std::cin>>"Hi";
 				
	-> Thats why we  declared using namespace std; in to the global section
*/
