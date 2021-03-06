#include "stdafx.h"
#include "SIGN.h"
#include "Container.h"

using namespace std;

int main()
{
	Container C;
	cout << "__________" << endl;
	cout << " 1. Show sorted array \n 2. Find month \n 3. Add \n 4. Exit" << endl;


	while (true)
	{
		switch (getchar())
		{
		case '1':

			if (C.getSize() == 0)
				cout << "Error: Can't sort empty Container!" << endl;
			else
			{
				C.AlphaberSort();
				cout << "Sorted array!" << endl;
				C.showContainer();
				cout << "__________" << endl;
			}
			break;

		case '2':

		{
			int month;
			cout << "Enter the month to find:";
			cin >> month;
			Container* subC(C.FindMM(month));
			if (subC->isEmpty())
				cout << "Nothing was found!" << endl;
			else 
				subC->showContainer();
			delete subC;
			cout << "__________" << endl;
			break;
		}

		case '3':

		{
			SIGN* P = new SIGN;
			C += P;
			break;
		}

		case '4':

			cout << "Esc" << endl;
			exit(EXIT_SUCCESS);
			break;
		}
	}

	system("pause");
	return 0;
}