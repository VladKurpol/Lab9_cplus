// Lab9_C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>

struct timetable
{
	int aud_number;
	std::string subject, firstname, secondname, lastname, group;
	struct tm_begin
	{
		int tm_sec;     // секунды после минут [0,59]
		int tm_min;     // минуты после часов [0,59]
		int tm_hour;    // часы после полуночи [0,23]
		int tm_mday;    // день месяца [1,31]
		int tm_mon;     // месяц года (январь = 0) [0,11]
		int tm_year;    // год (1900 год = 0)

	}b;
	struct tm_ending
	{
		int tm_sec;     // секунды после минут [0,59]
		int tm_min;     // минуты после часов [0,59]
		int tm_hour;    // часы после полуночи [0,23]
		int tm_mday;    // день месяца [1,31]
		int tm_mon;     // месяц года (январь = 0) [0,11]
		int tm_year;    // год (1900 год = 0)

	}e;
	std::string enter;
};

void Input(timetable *table, int number)
{
	for (size_t i = 0; i < number; i++)
	{
		std::cout << "Начало экзамена" << "\n";

		std::cout << "День: ";
		std::cin >> table[i].b.tm_mday;
		std::cout << "\n";

		std::cout << "Месяц: ";
		std::cin >> table[i].b.tm_mon;
		std::cout << "\n";

		std::cout << "Год: ";
		std::cin >> table[i].b.tm_mday;
		std::cout << "\n";

		std::cout << "Секунды: ";
		std::cin >> table[i].b.tm_mday;
		std::cout << "\n";

		std::cout << "Месяц: ";
		std::cin >> table[i].b.tm_mon;
		std::cout << "\n";

		std::cout << "Год: ";
		std::cin >> table[i].b.tm_mday;
		std::cout << "\n" << "\n";

		std::cout << "Конец экзамена" << "\n";

		std::cout << "День: ";
		std::cin >> table[i].e.tm_mday;
		std::cout << "\n";

		std::cout << "Месяц: ";
		std::cin >> table[i].e.tm_mon;
		std::cout << "\n";

		std::cout << "Год: ";
		std::cin >> table[i].e.tm_mday;
		std::cout << "\n";

		std::cout << "Секунды: ";
		std::cin >> table[i].e.tm_mday;
		std::cout << "\n";

		std::cout << "Месяц: ";
		std::cin >> table[i].e.tm_mon;
		std::cout << "\n";

		std::cout << "Год: ";
		std::cin >> table[i].e.tm_mday;
		std::cout << "\n" << "\n";

		std::cout << "Предмет: ";
		std::cin >> table[i].subject;
		std::cout << "\n" << "\n";

		std::cout << "ФИО" << "\n";

		std::cout << "Фамилия: ";
		std::cin >> table[i].lastname;
		std::cout << "\n";

		std::cout << "Имя: ";
		std::cin >> table[i].firstname;
		std::cout << "\n";

		std::cout << "Отчество: ";
		std::cin >> table[i].secondname;
		std::cout << "\n" << "\n";

		std::cout << "Группа: ";
		std::cin >> table[i].group;
		std::cout << "\n" << "\n";
	}
}

void Save_in(timetable *table, int number)
{
	std::cout << "Введите имя будущего файла" << "\n";
	std::string choice;
	std::cin >> choice;
	std::ofstream database;
	database.open(choice);
	for (size_t i = 0; i < number; i++)
	{
		database << table[i].b.tm_mday;
		database << table[i].b.tm_mon;
		database << table[i].b.tm_mday;
		database << table[i].b.tm_mday;
		database << table[i].b.tm_mon;
		database << table[i].b.tm_mday;
		database << table[i].e.tm_mday;
		database << table[i].e.tm_mon;
		database << table[i].e.tm_mday;
		database << table[i].e.tm_mday;
		database << table[i].e.tm_mon;
		database << table[i].e.tm_mday;
		database << table[i].subject;
		database << table[i].lastname;
		database << table[i].firstname;
		database << table[i].secondname;
		database << table[i].group;
	}
	std::cout << "Успешная запись!" << "\n";

}

void Find_inf(timetable *table, int number)
{
	int sum = 0;
	for (size_t i = 0; i < number; i++)
	{
		if (table[i].subject == "informatic")
		{
			std::cout << table[i].subject << "\n";
			std::cout << "Дата:" << table[i].b.tm_mday << table[i].b.tm_mon << table[i].b.tm_year << "   " << table[i].b.tm_hour << table[i].b.tm_min << table[i].b.tm_sec;
			sum +=
		}
	}
}

int main()
{
	std::cout << "Сколько записей вы хотите записать в файл?" << "\n";

	int number = 0;

	std::cin >> number;
	std::cout << "Введите данные: " << "\n" << "\n";

	timetable *table = new timetable[number];

	Input(table, number);
	Save_in(table, number);
	Find_inf(table, number);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
