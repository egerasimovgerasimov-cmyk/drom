#include <iostream>
#include <string.h>
#include <fstream>
#include <string>

using namespace std;
bool regis (string a) 

{
	string f;
	string l;
	int mass[3];
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
		{
			l = f.substr(0, mass[0]);
			
			if (l == a)
			{
				cout << "Такой логин уже существует, придумайте другой\n ";
				file.close();
				return (false);
			}
			

		}

	}
	file.close();
	return (true);
}
void RegistraciaUser()
{
	bool reg = false;
	string t;
	ofstream file("users.txt", ios::app); // начинает писать в конец файла (если ios не будет, то файл будет постоянно чиститься)
	{
		cout << "Регистрация" << endl << "Придумайте логин: ";
		while (reg == false)
		{
			getline(cin, t); //ввод в строку t
		reg = regis(t); // получаем праву или ложь
		}
		file << t << " "; // в файл ФАЙЛ записываем переменную t добавляем пробел (записали логин)
	
		cout << "Придумайте пароль: " << endl;
		getline(cin, t);
		file << t << endl; // то же самое с паролем (только без пробела)
		file.close();
		system("cls");
	}
}