#pragma once
#include "SIGN.h"
#include "stdafx.h"

class Container
{
private:
	SIGN * * Data;
	int size;
public:
	Container();
	~Container();
	Container(Container C, int value);
	Container(int value);
	Container& operator +=(SIGN* P);
	Container* FindMM(int month);
	void AlphaberSort();
	void showContainer();
	int getSize();
	bool isEmpty();
};