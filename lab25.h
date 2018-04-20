/*******************************************************************************
 * AUTHORs		: Corey Dickinson & Sebastian Hooshmand
 * Lab #25		: Array Train - Set #1
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/23/18
 ******************************************************************************/

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream> // Used for cout.
#include <iomanip>  // Used for setw in class heading
#include <string>   // Used for string
using namespace std;

/******************************************************************************
* PrintHeader
* This function receives an assignment name, type
* and number then outputs the appropriate header
* ==> returns nothing - This will output the class heading.
******************************************************************************/
void PrintHeader(string asName, //IN - Name of the assignment
				 int asNum, 	//IN - Number of the assignment
				 char asType);	//IN - Type of assignment L = lab A = Assignment

/******************************************************************************
* CalcAvgNumAr
* This function receives an array of numbers and the size of the array and
* calculates the average of all the numbers in the array.
* ==> returns the average of all numbers in the array.
******************************************************************************/
double CalcAvgNumAr(const int NUM_AR[],  //IN - The array to be averaged
		            const int AR_SIZE);//IN - The size of the array

/******************************************************************************
* FindFirstInstance
* This function finds the first instance of a number in the array.
* ==> returns the first instance of a number in an array.
******************************************************************************/

int FindFirstInstance(const int NUM_AR[], //In - The array you are searching for
					  const int AR_SIZE,//In - The size of the array
					  int num);			//In - The number you are searching for

/******************************************************************************
* FindNumberOfNumInstances
* This function finds the amount of times a number appears in an array.
* ==> returns the total number of times a number is in an array.
******************************************************************************/
int FindNumberOfNumInstances(const int NUM_AR[], //IN - The array youre searching
							 const int AR_SIZE,//IN - The size of the array
							 int num);		   //IN - The number you want to
											   //     count appearance of.
/******************************************************************************
* SearchStringAr
* This function searches for a word(s) in the array.
* ==> returns the instance it's located at.
******************************************************************************/

int SearchStringAr(const string STRING_AR[], //IN - The array you're searching
				   const int AR_SIZE, 	   //IN - The size if the array
				   string search);		   //IN - The string being searched for

/******************************************************************************
* FindLargestAr
* This function finds the largest number in the array.
* ==> returns the instance that the largest number is located.
******************************************************************************/
int FindLargestAr(const int NUM_AR[],  //IN - The array to be searched
				  const int AR_SIZE);//IN - The size of the array

/******************************************************************************
* FindLowestAr
* This function finds the lowest number in the array.
* ==> returns the instance that the lowest number is located.
******************************************************************************/
int FindLowestAr(const int NUM_AR[],  //IN - The array to be searched
				 const int AR_SIZE);//IN - The size of the array

/******************************************************************************
* SumAr
* This function receives an array of numbers and the size of the array and
* calculates the sum of all the numbers in the array.
* ==> returns the sum of all numbers in the array.
******************************************************************************/
int SumAr(const int NUM_AR[],  //IN - The array to be summed
		  const int AR_SIZE);//IN - The size of the array.

#endif
