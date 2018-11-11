#include "stdafx.h"
#include "SIGN.h"

using namespace std;
SIGN::SIGN()
{
	cout << "ctor" << endl;
	int i = 0;
	cout << "Class SIGN Ctor" << endl;
	cout << "Enter name of the shop: ";
	cin >> surName;

	cout << "Enter name of the name: ";
	cin >> Name;
	cout << "Enter the SIGN:";
	cin >> DATA;
}
SIGN::SIGN(const SIGN*)
SIGN::SIGN(const SIGN* P)
{
	cout << "copy ctor" << endl;
	this->surName = surName;
	this->Name = Name;
	this->DATA = DATA;
	this->surName = P->surName;
	this->Name = P->Name;
	this->DATA = P->DATA;
}
SIGN :: ~SIGN()
{
	cout << "dtor" << endl;
	//free(surName);
	//free(Name);
	cout << "SIGN dtor" << endl;
}
void SIGN::show()
{
	cout << "Name of the shop:" << surName << endl;
	cout << "Name of the name:" << Name << endl;
	cout << "SIGN:" << DATA << endl;
}
void SIGN::ShownameAndDATA()
{
	cout << "Name of the name:" << Name << endl;
	cout << "SIGN:" << DATA << endl;
}
string SIGN::getsurName()
{
	return surName;
}
string SIGN::getName()
{
	return Name;
}
void SIGN::Showname()
{
	cout << "Name of the name:" << Name << endl;
}
void SIGN::ShowDATA()
{
	cout << "SIGN:" << DATA << endl;
}
SIGN* SIGN::operator=(SIGN*)
SIGN* SIGN::operator=(SIGN* P)
{
	this->Name = Name;
	this->surName = surName;
	this->DATA = DATA;
	cout << "Operator=" << endl;
	this->Name = P->Name;
	this->surName = P->surName;
	this->DATA = P->DATA;
	return this;
}

void SIGN::SetNewObject()
{
	cout << "" << endl;
	cout << "Enter name of the shop: ";
	cin >> surName;
	cout << "Enter name of the name: ";
	cin >> Name;
	cout << "Enter the SIGN:";
	cin >> DATA;
}