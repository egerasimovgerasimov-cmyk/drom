#include <iostream>
#include <string.h>
#include <fstream>
#include <Windows.h>
#include "regist.h"
#include "autoriz.h"
#include "obiav.h"
#include "kabin.h"	
using namespace std;




int main()
{

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	string q = "";
	string d = "";

	while (true)
		{
			cout << "1. (Регистрация)" << endl << "2. (Авторизация)" << endl << "3. (Выход из приложения)" << endl;
			getline(cin, d);
			if (d == "1")
			{
				RegistraciaUser();

			}
			else if (d == "2")
			{
				q = AutorizatsiaUser();
				break;
			}

			else if (d == "3")
			{
				return 0;
			}
				system("cls");
		}
		d = "";
		while (true)
		{
			cout << "Меню " << endl << "1. (Объявления)" << endl << "2. (Личный кабинет) " << endl << "3. (Выйти из аккаунта) " << endl;
			getline(cin, d);
			if (d == "1")
				
			{
				system("cls");
				CarTypeSelection();
			}
			else if (d == "2")
			{
				system("cls");
				KabiLich(q);
			}
			else if (d == "3")
			{
				system("cls");
			q =	AutorizatsiaUser();
			}
		}





	}


