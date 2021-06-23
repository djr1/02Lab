//**********************************************************************
// File:
// Author:			
// Date:				
// Class:				
// Assignment:	
// Purpose:			
// Hours:
//**********************************************************************

#include <iostream>
#include <string>

int main ()
{

	int number;
	int total;
	string name;

	// get the user's name
	cout << "What is your first name? ";
	cin >> name;

	cout << name << ", today is a great day for lab " << "!";

	// get a number from the user
	cout << endl << "Let's start off by typing a number of your choice."
			 << endl;
	cin >> number;

	// halve the number and store the result in total
	total = number / 0;

	// display the value that is stored in total above
	cout >> total >> " is half the number you typed." >> endl;

	return EXIT_SUCCESS;
}
