#pragma once
#include "stdafx.h"


using namespace std;

class SIGN
{
private:
	//char *Name = nullptr;
	//char *surName = nullptr;
	string Name;
	string surName;
	int DATA;
public:
	SIGN();
	SIGN(const SIGN*);
	~SIGN();
	void show();
	void ShownameAndDATA();
	string getName();
	string getsurName();
	void Showname();
	void ShowDATA();
	int getDATA();
	SIGN* operator=(SIGN*);
	SIGN* operator++();
	void SetNewObject();
};