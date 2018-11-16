 #include "stdafx.h"
 #include "Container.h"
 
 using namespace std;
     Container::Container()
     {
         cout<<"Container DATA"<<endl;
         size=2;
         Data=new SIGN*[size];
         for (int i=0;i<size;i++)
             Data[i]=new SIGN;
     }
 	Container:: ~Container(){
         cout<<"dtor Container"<<endl;
 			delete[] Data;
     }
 
 	Container::Container (Container C, int value)
     {
         cout<<"copy DATA Container"<<endl;
         size=value;
         Data=new SIGN*[size];
         for (int i=0;i<(C.size < this->size ? C.size : this->size);i++)
                 this->Data[i]=C.Data[i];
     }
 
      void Container::showContainer()
     {
         for (int i=0;i<this->size;i++)
             Data[i]->show();
     }
 
     Container& Container:: operator ++()
     {
         cout<<"Operator ++"<<endl;
 		Container newC (*this, (this->getSize() + 1));
 		SIGN* X = new SIGN;
 		newC.Data[(newC.size) - 1] = X;
         this->size++;
         this->Data=new SIGN*[this->size];
         for (int i=0;i<this->size;i++)
             this->Data[i]=newC.Data[i];
         return *this;
     }
 
	Container& Container:: operator --()
	{
		cout << "Operator --" << endl;
		try
		{
			if ((this->size)-- == 0)
				throw -1;
		}
		catch (int err)
		{
			cout << "Size of Container can't be below zero! \n Operator -- failed" << endl;
			exit(err);
		}
		this->size--;
		Container newC(*this, (this->size));
		this->Data = new SIGN*[this->size];
		for (int i = 0; i<this->size; i++)
 			this->Data[i] = newC.Data[i];
 		return *this;
 
 	}
 
 	void Container::AlphaberSort()
 	{
 		string tempI;
 		int min_idx;
 		for (int i = 0; i < this->size - 1; i++)
 		{
 			min_idx = i;
 			tempI = this->Data[i]->getName();
 			for (int j = i + 1; j < size; j++)
 			{
 				string tempJ = this->Data[j]->getName();
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
 				SIGN* temp_P = new SIGN(this->Data[i]);
 				this->Data[i] = this->Data[min_idx];
 				this->Data[min_idx] = temp_P;
 				min_idx = i;
 			}
 
 		}
 	}
 
     int Container:: getSize()
     {
         return this->size;
     }
 	bool Container:: Find()
 	{
 		string ;
 		cout << "Enter the name of the  to find:";
 		cin >> ;
 		bool flag = false;
 		for (int i = 0; i < size; i++)
 		{
 			string temp = this->Data[i]->getName();
 			if (( == temp) == true)
 			{
 				flag = true;
 				this->Data[i]->Show();
 			}
 
 		}
 		return flag;
 	}