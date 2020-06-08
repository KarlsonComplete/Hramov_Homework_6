/*Преобразовать матрицу, умножив элементы каждой строки на значение второго элемента этой строки. */
/*
#include <iostream>
#include <fstream>
#include <time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int Mas2d[2][3];
	

	for (int j = 0; j<2; j++)
		for (int i = 0; i<3; i++)
			Mas2d[j][i] = rand() % 50;

	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 3; i++) 
			cout << Mas2d[j][i] << " ";
				cout << endl;
		}
	for (int j = 0; j < 2; j++)
		for (int i = 0; i < 3; i++)
			Mas2d[j][i] *= Mas2d[j][i+1];

	cout << "Преобразование Матрицы" <<endl;

	for (int j = 0; j < 2; j++)
		for (int i = 0; i < 3; i++)
			cout << Mas2d[j][i] << " ";
	cout << endl;
}
*/

