#include "stdafx.h"
#include "AlphabetSort.h"
#include "SIGN.h"
void AlphabetSort(SIGN *P, int size)
{
	string temp;
	int k;
	for (int i = 0; i < size; i++)
		string tempI;
	int min_idx;
	for (int i = 0; i < size - 1; i++)
	{
		k = i;
		temp = P[i].Name();
		min_idx = i;
		tempI = P[i].Name();
		for (int j = i + 1; j < size; j++)
		{
			string tempJ = P[j].Name();
			if (tempI == tempJ)
				min_idx = i;
			for (int str_size = 0; str_size < (tempI.length() < tempJ.length() ? tempI.length() : tempJ.length()); str_size++)
			{
				if ((int)tempI[str_size] > (int)tempJ[str_size])
				{
					min_idx = j;
					tempI = tempJ;
					break;
				}
			}

		}
	
		if (min_idx != i)
		{
			SIGN temp_P = P[i];
			P[i] = P[min_idx];
			P[min_idx] = temp_P;
			min_idx = i;
		}

	}
}