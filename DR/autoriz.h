#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string aut()
{
	string a;
	string b;
	string f;
	string l;
	string p;
	int mass[3];


	while (true)
	{
		cout << "Введите логин: " ;
		getline(cin, a);
		

		cout << "Введите пароль: ";
		getline(cin, b);
		ifstream file("users.txt");
		while (getline(file, f))
		{
			for (int i = 0; i < 3; i++) mass[i] = 0;
			for (int i = 0; i < f.size(); ++i)

			{
				if (f[i] == ' ')
				{
					for (int j = 0; j < 3; j++)
					{
						if (mass[j] == 0)
						{
							mass[j] = i;
							break;
						}
					}
				}
			}
			if (f != "")
			{ //substr копирование отрезка из строки, которое поднимает 2 параметра (начало и кол-во копируемых символов)
				l = f.substr(0, mass[0]);
				//2 пробел - 1 пробел - сам пробел (чтобы вывести 2-ое слово)
				p = f.substr(mass[0] + 1, mass[1] - mass[0] - 1);
				if (l == a and p == b)
				{
					file.close();
					system("cls");
					//Возвращение в строку где был логин и пароль
					return f;
				}


			}

		}
		system("cls");
		cout << "Неверный логин или пароль " << endl;
		
		file.close();
	}
}
//возвращаем в строку, в которой находился логин и пароль пользователя
string AutorizatsiaUser()
{
	string p;
	

	cout << "Авторизация" << endl;

		p = aut();
		return p;
	
}
