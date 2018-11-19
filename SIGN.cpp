#include "stdafx.h"
#include "SIGN.h"

using namespace std;

SIGN::SIGN()
{
	cout << "Class SIGN Ctor" << endl;
	cout << "Enter Name: ";
	cin >> Name;
	cout << "Enter Surname: ";
	cin >> Surname;
	cout << "Enter Sign: ";
	cin >> Sign;
	cout << "Enter the Date of Birth:";
	cin >> DR[0] >> DR[1] >> DR[2];
}

SIGN::SIGN(const SIGN& P)//конструктор копирования
{
	cout << "Copy ctor" << endl;
	this->Name = P.Name;
	this->Surname = P.Surname;
	this->Sign = P.Sign;
	this->DR[0] = P.DR[0];
	this->DR[1] = P.DR[1];
	this->DR[2] = P.DR[2];
}

SIGN :: ~SIGN()//деструктор SIGN
{
	cout << "SIGN dtor" << endl;
}

SIGN& SIGN::operator=(SIGN& P)
{
	cout << "Operator= SIGN" << endl;
	this->Sign = P.Sign;
	this->Name = P.Name;
	this->Surname = P.Surname;
	this->DR[0] = P.DR[0];
	this->DR[1] = P.DR[1];
	this->DR[2] = P.DR[2];
	return *this;
}

string SIGN::getName()
{
	return Name;
}

string SIGN::getSurname()
{
	return Surname;
}

string SIGN::getSign()
{
	return Sign;
}

int SIGN::DD()
{
	return DR[0];
}

int SIGN::MM()
{
	return DR[1];
}

int SIGN::YY()
{
	return DR[2];
}

void SIGN::show()//оператор вывода
{
	cout << "Name:" << Name << endl;
	cout << "Surname:" << Surname << endl;
	cout << "Sign:" << Sign << endl;
	cout << "Date of Birth:" << DR[0] << '/' << DR[1] << '/' << DR[2] << endl;
}