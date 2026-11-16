#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

// Экран "Характеристики автомобиля".
// Принимает строку объявления из obiava.txt в формате:
//   N)Марка;цена;пробег;рейтинг продавца;коробка передач
// Первые два символа ("1)") отбрасываются, остальное режется по ';'.
void Harakt(string f)
{
	string t;
	string h;
	string p;
	string q;
	int r = 0;
	int mass[4];

	// Ищем позиции четырёх разделителей ';'
	for (int i = 0; i < 4; i++) mass[i] = 0;
	for (int i = 0; i < f.size(); ++i)
	{
		if (f[i] == ';')
		{
			for (int j = 0; j < 4; j++)
			{
				if (mass[j] == 0) // позиция ещё не занята
				{
					mass[j] = i;
					break;
				}
			}
		}
	}

	t = f.substr(2, mass[0] - 2);                        // марка, без "1)"
	h = f.substr(mass[0] + 1, mass[1] - mass[0] - 1);    // цена
	p = f.substr(mass[1] + 1, mass[2] - mass[1] - 1);    // пробег
	q = f.substr(mass[2] + 1, mass[3] - mass[2] - 1);    // рейтинг продавца

	cout << "Марка: " << t << endl;
	cout << "Цена: " << h << endl;
	cout << "Пробег: " << p << endl;
	cout << "Рейтинг продавца: " << q << endl;

	cout << "Введите 0 для выхода " << endl;
	cin >> r;
	cin.ignore();
	if (r == 0)
	{
		system("cls");
		return;
	}
}
