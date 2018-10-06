// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	cout << "������� �������: ";
	cin >> n;

	TMatrix<int> a(n), b(n);

	cout << "������� ������ �������:" << endl;
	cin >> a;

	cout << "������� ������ �������:" << endl;
	cin >> b;

	int key = 0;
	do
	{
		cout << "�������� �������� ��� ���������:" << endl;
		cout << "1) a + b" << endl;
		cout << "2) a - b" << endl;
		cout << "3) b - a" << endl;
		int input;
		cin >> input;

		switch (input)
		{
		case 1:
			cout << a + b;
			key++;
			break;
		case 2:
			cout << a - b;
			key++;
			break;
		case 3:
			cout << b - a;
			key++;
			break;
		default:
			cout << "�� ��������� ������. ����� ������������ ������ 1, 2, 3" << endl;
		}

		int key1 = 0;
		do
		{
			cout << "������ �� �� ������� ������ ��������? (1 - ��, 2 - ���)" << endl;
			int input1;
			cin >> input1;

			switch (input1)
			{
			case 1:
				key = 0;
				key1++;
				break;
			case 2:
				key1++;
				break;
			default:
				cout << "�� ��������� ������. ����� ������������ ������ 1, 2" << endl;
			}
		} 
		while (!key1);
	} 
	while (!key);
}
//---------------------------------------------------------------------------
