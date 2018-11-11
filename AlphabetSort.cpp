#include "stdafx.h"
#include "AlphabetSort.h"
#include "SIGN.h"
void AlphabetSort(SIGN *P, int size)
{
	string temp;
	int k;
	for (int i = 0; i < size; i++)
	{
		k = i;
		temp = P[i].getName();
		for (int j = i + 1; j < size; j++)
		{
			string tempJ = P[j].getName();

		}
		//string temp = P[i+1].getName();

	}
}