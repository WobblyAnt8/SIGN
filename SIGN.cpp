include "SIGN.h"

using namespace std;

SIGN::SIGN()
{
	cout << "ctor" << endl;
	int i = 0;
	cout << "Enter name of the : ";
	cin >> Name;
	
	cout << "Enter name of the : ";
	cin >> Surname;
	cout << "Enter the SIGN:";
	cin >> DATA;
}
SIGN::SIGN(const SIGN*)
{
	cout << "copy ctor" << endl;
	this->Name = Name;
	this->Surname = Surname;
	this->DATA = DATA;
}
SIGN :: ~SIGN()
{
	cout << "dtor" << endl;
	@@ - 31, 24 + 41, 32 @@

		void SIGN::show()
	{
		cout << "Name of the :" << Name << endl;
		cout << "Name of the :" << Surname << endl;
		cout << "SIGN:" << DATA << endl;
	}

	string SIGN::Name()
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
	SIGN* SIGN::operator=(SIGN*)
	{
		this->Surname = Surname;
		this->Name = Name;
		this->DATA = DATA;
		return this;
	}