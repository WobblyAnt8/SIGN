#pragma once
#include "SIGN.h"
#include "stdafx.h"
class Container
{
private:
	SIGN** Data;
	int size;
public:
	Container();

	~Container();
	Container(Container C, int value);
	void showContainer();
	Container& operator ++();
	Container& operator --();
	string getName();
	string getNameName();
	void AlphaberSort();
	bool FindMM();
	int getSize();
};