#include "stdafx.h"
#include "SIGN.h"
using namespace std;
SIGN::SIGN()
{
	cout << "ctor" << endl;
	int i = 0;
	cout << "Enter name of the Name: ";
	cin >> Name;

	cout << "Enter name of the : ";
	cin >> Surname;
	cout << "Enter the SIGN:";
	cin >> DATA;
}
SIGN :: ~SIGN()
{
	cout << "dtor" << endl;
	//free(Name);
	//free(Surname);
}
void SIGN::show()
{
	cout << "Name of the Name:" << Name << endl;
	cout << "Name of the :" << Surname << endl;
	cout << "SIGN:" << DATA << endl;
}
string SIGN::getName()
{
	return Name;
}
string SIGN::getSurname()
{
	return Surname;
}
void SIGN::Show()
{
	cout << "Name of the :" << Surname << endl;
}
void SIGN::ShowDATA()
{
	cout << "SIGN:" << DATA << endl;
}