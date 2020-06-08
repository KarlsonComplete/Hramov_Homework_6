/*#include <iostream>
#include <fstream>
#include <time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int Mas2d[8][8];
	int sum = 0;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			Mas2d[i][j] = rand() % 50;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			cout << Mas2d[i][j] << " ";
	cout << endl;

	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) {
			if (j >= i)
				if (j % 2 == 1)
					if (Mas2d[i][j] > 0)
						sum += Mas2d[i][j];
		}
	cout << sum << endl;
		
}*/