#include <iostream>
#include <string>

using namespace std;

int main()
{
	//intro text
	cout << "Welcome to the grade checker" << endl;

	//get input from user
	cout << "Enter your grade: ";
	string Grade = "";
	cin >> Grade;

	//repeat back with grade and letter
	cout << "Your grade is " << Grade;
	cout << " and your letter grade is";
	cout << endl;
	cout << endl;
	
	return 0;
}