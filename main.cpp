/*******************************************************************************
 * AUTHORs		: Corey Dickinson & Sebastian Hooshmand
 * Lab #25		: Array Train - Set #1
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/23/18
 ******************************************************************************/

#include "lab25.h"

/*******************************************************************************
 * Array Train - Set #1
 * -----------------------------------------------------------------------------
 * This program will calculate the average of input ages, find the first
 * instance of an age, find the number of instances of an age, search for a
 * person by name, and find the oldest and youngest.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<Name of the user you are searching for.>
 *
 * OUTPUT:
 * 	<This program will output the average, the first instance, the number of
 * 	instances, the oldest and youngest ages .>
 ******************************************************************************/

int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * ARRAYS
	 * -------------------------------------------------------------------------
	 * NAME_AR    : Array that holds all the names.
	 * AGE_AR	  : Array that holds all the ages.
	 * GROUP_SIZE : The size of the group for the arrays.
	 * -------------------------------------------------------------------------
	 * LOOPS
	 * -------------------------------------------------------------------------
	 * TEST_COUNT : The number of times we're running loops to test functions
	 **************************************************************************/
	const int GROUP_SIZE = 11;
	const int TEST_COUNT =  4;
	const int AGE_AR[GROUP_SIZE] = {22,75,19,21,18,12,19,5,62,21,21};
	const string NAME_AR[GROUP_SIZE] = {"Zac","Kasra","Bas","Sara","Nick",
										"Devlin","Justin","Abe","Jeremy",
										"Farah","Maryam"};

	int    loopCount;		//CALC 			- loop count for the for loops
	int    age;				//IN   			- Age input by user
	int    firstIndex;		//CALC, OUT 	- The index for finding the first
							//			  		age in the group
	int	   numberOfAges;	//IN, CALC, OUT - The number of an age in the group
	int    nameIndex;		//CALC			- The index used for finding by name
	int	   oldestIndex;		//CALC			- Index used for finding who's
							//					oldest
	int	   youngestIndex;	//CALC			- Index used for finding who's
							//					youngest
	int	   ageSum;			//CALC, OUT		- The sum of all the ages
	double avgAge;			//CALC, OUT 	- The average of all the ages
	string name;			//IN, OUT   	- The name input by the user to
							//					search in the array.

	//OUTPUT - Class heading
	PrintHeader("Array Train - Set #1", 25, 'L');

	/***************************************************************************
	 * First function - Calculates the average of all the ages.
	 **************************************************************************/
	cout << "TEST CASE FOR CalcAvgNumAr\n";
	avgAge = CalcAvgNumAr(AGE_AR, GROUP_SIZE);

	//OUTPUT - outputs the average
	cout << fixed << setprecision(2);
	cout << "Average age: " << avgAge << endl << endl;
	cout.unsetf(ios::fixed);
	cout << setprecision(6);

	/***************************************************************************
	 * Second function - Finds the first instance of the age.
	 **************************************************************************/
	cout << "\n\nTEST CASE FOR FindFirstInstance \n";
	//PROCESSING - For loop to call and test the function 4 times.
	for(loopCount = 0; loopCount < TEST_COUNT; loopCount++)
		{
		//INPUT - Gets the age from the user
		cout << "Please enter the age you want to search for: ";
		cin  >> age;
		cin.ignore(1000,'\n');

		//Calls the function to find the first instance in the array
		firstIndex = FindFirstInstance(AGE_AR, GROUP_SIZE, age);
		//OUTPUT - Tells you the name and age of the first person in the group
		// 		   with the age or that no one with that age is in the group.
		if(firstIndex < GROUP_SIZE)
		{
		cout << "The first person in the list with an age of " << age
		     << " is: "<< NAME_AR[firstIndex] << " and their index is: "
			 << firstIndex<< '!' << endl << endl;
		}
		else
		{
			cout << "There is no one with that age in this group.\n\n";
		}
	}

	/***************************************************************************
	 * Third function - Finds the number of times an age appears.
	 **************************************************************************/
	cout << "\n\nTEST CASE FOR FindNumberOfNumInstances \n";
	//PROCESSING - For loop to call and test the function 4 times.
	for(loopCount = 0; loopCount < TEST_COUNT; loopCount++)
	{
		//INPUT - Gets the age from the user
		cout << "Please enter the age you want to search for: ";
		cin  >> age;
		cin.ignore(1000,'\n');

		//Calls the function to find the number of times a number appears
		numberOfAges = FindNumberOfNumInstances(AGE_AR, GROUP_SIZE, age);
		//OUTPUT - Tells you the number of times an age appears in the group or
		// 		   that no one with that age is in the group.
		if(numberOfAges != 0)
		{
			cout <<  "Number of Instances for age: " << numberOfAges
				 << endl << endl;
		}
		else
		{
			cout << "There is no instances of that age.\n\n";
		}
	}

	/***************************************************************************
	 * Fourth function - Finds index of the input name.
	 **************************************************************************/
	cout << "\n\nTEST CASE FOR SearchStringAr \n";
	//PROCESSING - For loop to call and test the function 4 times.
	for(loopCount = 0; loopCount < TEST_COUNT; loopCount++)
	{
		//INPUT - Gets the name from the user
	cout << "Please enter the name you want to search for: ";
		getline(cin, name);
		//Calls the function to find the index associated with the name
	nameIndex = SearchStringAr(NAME_AR, GROUP_SIZE, name);

	//OUTPUT - Tells you name and age of the person you searched or lets you
	// 		   know that no one with that name is in the group.
	if(nameIndex < GROUP_SIZE)
	{
		cout << name << " is " << AGE_AR[nameIndex] << " years old and their "
				"index is: "
			 << nameIndex +1 << endl << endl;
	}
	else
	{
		cout << "There is no one with that name in this group. \n\n";
	}
	}
	/***************************************************************************
	* Fifth function - Finds oldest person in the group.
	***************************************************************************/
	cout << "\n\nTEST CASE FOR FindLargestAr\n";
	//Calls the function to find the oldest person in the array
	oldestIndex = FindLargestAr(AGE_AR, GROUP_SIZE);

	//OUTPUT - outputs who is oldest
	cout << NAME_AR[oldestIndex] << " is the oldest with an age of "
		 << AGE_AR[oldestIndex]  << " and their index is: "
		 << oldestIndex << "!\n\n";

	/***************************************************************************
	* Sixth function - Finds youngest person in the group.
	***************************************************************************/
	cout << "\n\nTEST CASE FOR FindLowestAr\n";
	//Calls the function to find the youngest person in the array
	youngestIndex = FindLowestAr(AGE_AR, GROUP_SIZE);

	//OUTPUT - outputs who is youngest
	cout << NAME_AR[youngestIndex] << " is the youngest with an age of "
		 << AGE_AR[youngestIndex]  << " and their index is: "
		 << youngestIndex << "!\n\n";

	/***************************************************************************
	* Seventh function - Sums all the ages in the group
	***************************************************************************/
	cout << "\n\nTEST CASE FOR SumAr\n";

	//Calls the function to sum all the ages.
	ageSum = SumAr(AGE_AR, GROUP_SIZE);

	//OUTPUT - outputs the sum of all ages
	cout << "The sum of all the ages is: " << ageSum;
	return 0;
}
