/*
 * Name - Joe Carmon
 * Class CIS227 21/WI
 * Assignment - C++ Review in class example
 * Date - 1/13/21
 *
 * Purpose - Review C++
 *
 *
 *
 */

//includes section
#include <iostream>


//namespace declarations
using namespace std;

//Global scope variables and constants section
//Inputs
int iNumberOfCredits, iGradePoints;

//Outputs
double dGPA;

//Function declaration section
double CalculateGPA( int,int);
bool ValidateInteger(int);

//function definition section
int main()
{
	char cExit;
    bool bCheckedNumberOfCredits = 1;

    //loop once to gather Number of Credits
    do
    {

    	cout << "Enter the Number of Credits"; //Prompt user for number of credits
    	cin >> iNumberOfCredits;               //Get number of credits
    	bCheckedNumberOfCredits = ValidateInteger(iNumberOfCredits); //Validate input to verify that it is a digit

    }
    while (bCheckedNumberOfCredits); //Execute loop again if entry if not a number


	do
	{

		cout << "Enter the number of Grade Points.";
		cin >> iGradePoints;
		bCheckedNumberOfCredits = ValidateInteger(iGradePoints);

	}
	while(bCheckedNumberOfCredits);
    dGPA = CalculateGPA(iNumberOfCredits, iGradePoints);

    cout << dGPA;

    cin >> cExit;

return 0;
}

//Calculates the GPA for a given person
//  Forumla is grade points / Total credits attempted
//
double CalculateGPA(int iNumberOfCredits, int iGradePoints)
{

   return iGradePoints/iNumberOfCredits;

}

bool ValidateInteger( int iToValidate)
{

	return isdigit(iToValidate); //Return a o value if the value in not a digit
}
