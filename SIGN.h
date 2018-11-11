#pragma once
#include "stdafx.h"
using namespace std;
class SIGN
{
private:

	string Surname;
	string Name;
	int DATA;
public:
	SIGN();
	~SIGN();
	void show();
	string getSurname();
	string getName();
	void Show();
	void ShowDATA();
	int getDATA();
};