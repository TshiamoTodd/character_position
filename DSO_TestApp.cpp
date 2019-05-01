// DSO_TestApp.cpp : Calculates the position of a letter in the alphabet.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char letter;
	int position;

	cout << "Enter a character: " << endl;
	cin >> letter;

	if(letter >= 'a' && letter <= 'z') {
		position = letter - 'a' + 1; 
	} else if (letter >= 'A' && letter <= 'Z')
	{
		position = letter - 'A' + 1;
	} else
	{
		cout << "Invalid input";
	}

	cout << letter << " is position " << position << " on the alphabet" << endl;

	system("pause");
	return 0;
}

