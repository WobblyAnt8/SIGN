#pragma once
#include "stdafx.h"


using namespace std;

class SIGN
{
private:
	string Name;//���
	string Surname;//�������
	string Sign;//���� �������
	int DR[3];//���� ��������
public:
	SIGN();
	SIGN(const SIGN& P);
	~SIGN();
	SIGN& operator=(SIGN& P);//�������� ������������
	string getSign();
	string getName();
	string getSurname();
	int DD();
	int MM();
	int YY();
	void show();
};