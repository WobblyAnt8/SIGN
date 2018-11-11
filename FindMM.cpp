#include "stdafx.h"
#include "FindName.h"
void FindName(SIGN *P, int size)
{
	string Name;
	std::cout << "Enter the name of the Name:";
	std::cin >> Name;
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		string temp = P[i].getName();
		if ((Name == temp) == true)
		{
			flag = true;
			P[i].show();
		}
	}
	if (flag == false)
		std::cout << "No Names with this name!" << std::endl;
}