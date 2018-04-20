/*******************************************************************************
 * AUTHORs		: Corey Dickinson & Sebastian Hooshmand
 * Lab #25		: Array Train - Set #1
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/23/18
 ******************************************************************************/

#include "lab25.h"

void PrintHeader(string asName, int asNum, char asType)
{
	cout << left;
	cout << "*************************************************************\n";
	cout << "* PROGRAMMED BY : Corey Dickinson & Sebastian Hooshmand\n";
	cout << "* " << setw(14) << "STUDENT ID" << ": 361553 & 1009369\n";
	cout << "* " << setw(14) <<"CLASS" << ": CS1A - MW - 8AM\n";
	cout << "* ";
	// PROCESSING – This will adjust setws and format appropriately
	// 				based on if this is a lab ‘L’ or assignment
	if(toupper(asType) == 'L')
	{
	cout << "LAB #" << setw(9);
	}
	else
	{
	cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName << endl;
	cout << "*************************************************************\n\n";
	cout << right;
}
