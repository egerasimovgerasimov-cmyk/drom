#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void KabiLich(string a) //строка пользователя
{
	string b;
	string l;
	string p;
	int mass[3];
	
	
		for (int i = 0; i < 3; i++) mass[i] = 0;
		for (int i = 0; i < a.size(); ++i)

		{
			if (a[i] == ' ')
			{
				for (int j = 0; j < 3; j++)
				{
					if (mass[j] == 0)
					{
						// массив j = позиции пробела
						mass[j] = i;
						break;
					}
				}
			}
		}
		if (a != "")
		{
			l = a.substr(0, mass[0]);
			p = a.substr(mass[0] + 1, mass[1] - mass[0] - 1);



		}

	
	cout << "Личный кабинет " << endl << "Логин: " << l << endl << "Пароль: " << p << endl << "0. (Выход в главное меню) " << endl;
	getline(cin, b);
	{
		if (b == "0")
			system("cls");
		return;
	}
	
}