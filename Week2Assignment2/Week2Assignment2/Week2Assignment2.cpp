#include "stdafx.h"
#include<iostream>
#include<string>
#include<conio.h>
#include "PhoneCall.h"
using namespace std;


//Max calls for program
const int maxCalls = 10;

int main()
{

	PhoneCall callHistory[maxCalls];
	bool isDuplicate;

	//Set first call which will always be unique
	cin >> callHistory[0];

	//Loop until we reach the max calls -1, which will be the number we want since it is an array
	for (int i = 1; i <= (maxCalls - 1); i++)
	{
		//Get user input and assume it is a duplicate
		cin >> callHistory[i];
		isDuplicate = true;
		do 
		{
			//Go from the start of array until the current iteration of i
			for (int j = 0; j <= i; j++)
			{
				//Check to see if any of the phone numbers are the same
				if (callHistory[i].operator==(callHistory[j]))
				{
					//the phone number where i and j are the same will always be the same, but that's not an error, so we skip that
					if (!(i == j))
					{
						//set isDuplicate to true and break out of this for
						isDuplicate = true;
						break;
					}
				}
				else
				{
					//If none of the numbers are equal, we set to false so we can leave the loop
					isDuplicate = false;
				}
			}
			if (isDuplicate)
			{
				//If it is true, we ask them for another number
				cout << "Please enter a non-duplicate phone number." << endl;
				cin >> callHistory[i];

			}

		} while (isDuplicate);
	
	}

	for (int i = 0; i <= (maxCalls - 1); i++)
	{
		cout << callHistory[i];
	}


	cout << endl;
	system("pause");
	return 0;
}


