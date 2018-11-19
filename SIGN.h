#pragma once
#include "stdafx.h"


using namespace std;

class SIGN
{
private:
	string Name;//имя
	string Surname;//фамилия
	string Sign;//знак зодиака
	int DR[3];//дата рождения
public:
	SIGN();
	SIGN(const SIGN& P);
	~SIGN();
	SIGN& operator=(SIGN& P);//оператор присваивания
	string getSign();
	string getName();
	string getSurname();
	int DD();
	int MM();
	int YY();
	void show();
};