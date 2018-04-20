/*******************************************************************************
 * AUTHORs		: Corey Dickinson & Sebastian Hooshmand
 * Lab #25		: Array Train - Set #1
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/23/18
 ******************************************************************************/

#include "lab25.h"

/******************************************************************************
* FindFirstInstance
* This function finds the first instance of a number in the array.
* ==> returns the first instance of a number in an array.
* -----------------------------------------------------------------------------
* PRE-CONDITIONS
* 		The following needs to be input
* 			NUM_AR  : The array to be searched
* 			AR_SIZE : The size of the array
*			num     : The number being searched for
* POST-CONDITIONS
* 		==> Returns the first instance the number being searched for is found
******************************************************************************/

int FindFirstInstance(const int NUM_AR[], const int AR_SIZE, int num)
{
	int instance;		//CALC, OUT - the number of items in the array

	// Initializing instances to 0
	instance = 0;
	// While loop to go through the array to find the first instance
	while(instance < AR_SIZE && NUM_AR[instance] != num )
	{
		instance++;
	}

	return instance + 1;
}



