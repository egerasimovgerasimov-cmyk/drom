#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include "Harakter.h"
using namespace std;

void CarTypeSelection()

{
	string a;
	int c = 1; // счётчик
	int b = 0; // № машины
	string f = ""; //строка, а не файл
	int mass[3];
	ifstream file("obiava.txt");
	while (getline(file, f)) //получаем строку из file и сохранаем в переменную f
	{
		
		for (int i = 0; i < 3; i++) mass[i] = 0;
		for (int i = 0; i < f.size(); ++i)

		{
			if (f[i] == ';')
			{
				for (int j = 0; j < 3; j++)
				{
					if (mass[j] == 0) // эл-т в массиве пустой и можно записывать индекс пробела (i)
					{
						mass[j] = i;
						break;
					}
				}
			}
		}
		a = f.substr(0, mass[0]); // вывод первого слова
		cout << a << endl;
	}
	cin >> b;
	cin.ignore();
	file.clear();
	file.seekg(0); //возвращение к 1-му элементу строки

	while (getline(file, f)) // выделяем строку из файла и сохраняем в переменную f
	{
		if (b == c)
		{
			system("cls");
		Harakt(f);
	}
		c++;  
	}

}
   