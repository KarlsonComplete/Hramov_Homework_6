/*#include <iostream>
#include <fstream>
#include <time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int mat[2][6];
	cout << "��� ������� ������: " << endl;

	for (int j = 0; j < 6; j++) {
		cout <<"Round:" "[" << 0 << "][" << j << "] = ";
		cin >> mat[0][j];
	}

	cout << "�������� ��������: " << endl;

	for (int j = 0; j < 6; j++) {
		cout <<"Round:" "[" << 0 << "][" << j << "] = ";
		cin >> mat[1][j];
	}

	cout << "�������: " << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
			cout << mat[i][j] << "\t";
		cout << endl;
	}
}*/