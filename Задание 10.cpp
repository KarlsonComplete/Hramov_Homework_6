/*Реализовать сложение, вычитание, умножение, транспонирование матриц (разрешается фиксированный размер матриц).*/
/*#include <iostream>
#include <math.h>
#include <fstream>
#include <time.h>
#include<stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char a;
	int t = 0;
	const int rows = 2;
	const int cols = 2;
	int mat1[rows][cols];
	int mat2[rows][cols];
	int mat3[rows][cols];
	
	cout << "Введите матрицу 1: " << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> mat1[i][j];
		}
	}
	cout << "Введите матрицу 2: " << endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "[" << i << "][" << j << "] = ";
			cin >> mat2[i][j];
		}
	}
	cout << "Введите операцию которую нужно произвести с матрицами: " << endl
		<< "1.+" << endl
		<< "2.-" << endl
		<< "3.*" << endl
		<< "4.Транспонирование" << endl
		<< "Vibor: " << endl;
	cin >> a;

	switch (a) {
	case '1':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				mat3[i][j] = mat1[i][j] + mat2[i][j];
			}
		cout << "Ответ: " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << mat3[i][j] << "    ";
			}
			cout << endl;
		}
		break;

	case '2':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				mat3[i][j] = mat1[i][j] - mat2[i][j];
			}
		cout << "Ответ: " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << mat3[i][j] << "    ";
			}
			cout << endl;
		}
		break;

	case '3':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				mat3[i][j] = 0;
				for (int k = 0; k < 3; k++)
					mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		cout << "Ответ: " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << mat3[i][j] << "    ";
			}
			cout << endl;
		}
		break;

	case '4':
		for (int i = 0; i < rows; i++)
			for (int j = 0; j < cols; j++) {
				t = mat1[i][j];
				mat1[i][j] = mat1[j][i];
				mat1[j][i] = t;
			}
		cout << "Ответ: " << endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << mat1[j][i] << "    ";
			}
			cout << endl;
		}
		break;
	}

}
*/