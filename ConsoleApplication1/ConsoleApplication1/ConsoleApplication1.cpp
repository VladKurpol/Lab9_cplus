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
	struct tm_begining {
		int tm_sec;   // seconds of minutes from 0 to 61
		int tm_min[2];   // minutes of hour from 0 to 59 =
		int tm_hour[2];  // hours of day from 0 to 24 =
		int tm_mday;  // day of month from 1 to 31 =
		int tm_mon;   // month of year from 0 to 11 =
		int tm_year;  // year since 1900
	}b;
	struct tm_ending {
		int tm_sec;   // seconds of minutes from 0 to 61
		int tm_min[2];   // minutes of hour from 0 to 59 =
		int tm_hour[2];  // hours of day from 0 to 24 =
		int tm_mday;  // day of month from 1 to 31 =
		int tm_mon;   // month of year from 0 to 11 =
		int tm_year;  // year since 1900
	}e;
	int tm_wday;  // days since sunday
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
		std::cin >> table[i].b.tm_year;
		std::cout << "\n";

		std::cout << "Секунды: ";
		std::cin >> table[i].b.tm_sec;
		std::cout << "\n";

		std::cout << "Минуты: " << "\n";
		std::cout << "Начало первого экзамена (мин)";
		std::cin >> table[i].b.tm_min[0];
		std::cout << "\n";
		std::cout << "Начало второго экзамена (мин)";
		std::cin >> table[i].b.tm_min[1];
		std::cout << "\n";
		std::cout << "Начало третьего экзамена (мин)";
		std::cin >> table[i].b.tm_min[2];
		std::cout << "\n";

		std::cout << "Часы: ";
		std::cout << "Начало первого экзамена (час)";
		std::cin >> table[i].b.tm_hour[0];
		std::cout << "\n" << "\n";
		std::cout << "Начало второго экзамена (час)";
		std::cin >> table[i].b.tm_hour[0];
		std::cout << "\n" << "\n";
		std::cout << "Начало третьего экзамена (час)";
		std::cin >> table[i].b.tm_hour[0];
		std::cout << "\n" << "\n";

		std::cout << "Конец экзамена" << "\n";

		std::cout << "День: ";
		std::cin >> table[i].e.tm_mday;
		std::cout << "\n";

		std::cout << "Месяц: ";
		std::cin >> table[i].e.tm_mon;
		std::cout << "\n";

		std::cout << "Год: ";
		std::cin >> table[i].e.tm_year;
		std::cout << "\n";

		std::cout << "Секунды: ";
		std::cin >> table[i].e.tm_sec;
		std::cout << "\n";

		std::cout << "Минуты: " << "\n";
		std::cout << "Конец первого экзамена (мин)";
		std::cin >> table[i].e.tm_min[0];
		std::cout << "\n";
		std::cout << "Конец второго экзамена (мин)";
		std::cin >> table[i].e.tm_min[1];
		std::cout << "\n";
		std::cout << "Конец третьего экзамена (мин)";
		std::cin >> table[i].e.tm_min[2];
		std::cout << "\n";

		std::cout << "Часы: ";
		std::cout << "Конец первого экзамена (час)";
		std::cin >> table[i].e.tm_hour[0];
		std::cout << "\n";
		std::cout << "Конец второго экзамена (час)";
		std::cin >> table[i].e.tm_hour[0];
		std::cout << "\n" << "\n";
		std::cout << "Конец третьего экзамена (час)";
		std::cin >> table[i].e.tm_hour[0];
		std::cout << "\n" << "\n";

		std::cout << "День недели (1-7)" << "\n";
		std::cin >> table[i].tm_wday;
		std::cout << "\n";

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

		std::cout << "Аудитория: ";
		std::cin >> table[i].aud_number;
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
		database << table[i].b.tm_year;
		database << table[i].b.tm_sec;
		database << table[i].b.tm_min[0];
		database << table[i].b.tm_min[1];
		database << table[i].b.tm_min[2];
		database << table[i].b.tm_hour[0];
		database << table[i].b.tm_hour[1];
		database << table[i].b.tm_hour[2];
		database << table[i].e.tm_mday;
		database << table[i].e.tm_mon;
		database << table[i].e.tm_year;
		database << table[i].e.tm_sec;
		database << table[i].e.tm_min[0];
		database << table[i].e.tm_min[1];
		database << table[i].e.tm_min[2];
		database << table[i].e.tm_hour[0];
		database << table[i].e.tm_hour[1];
		database << table[i].e.tm_hour[2];
		database << table[i].tm_wday;
		database << table[i].subject;
		database << table[i].lastname;
		database << table[i].firstname;
		database << table[i].secondname;
		database << table[i].group;
		database << table[i].aud_number;
	}
	system("cls");
	std::cout << "Успешная запись!" << "\n";
	menu(table, number);
}

void Find_inf(timetable *table, int number)
{
	std::cout << "Введите дату, по которой вы хотите найти экзамен: (ДДММ) " << "\n";
	
	int tm_mday = 0;
	int tm_mon = 0;

	std::cin >> tm_mday;
	std::cin >> tm_mon;
	int pointer = 0;
	int total_time = 0;

	for (size_t i = 0; i < number; i++)
	{
		if (tm_mday == table[i].b.tm_mday && tm_mon == table[i].b.tm_mon)
		{
			for (size_t j = 0; j < 2; j++)
			{
				if (table[i].subject == "Информатика")
				{
					pointer++;
					total_time += (table[i].e.tm_hour[j] - table[i].b.tm_hour[j]) * 60 + (table[i].e.tm_min[j] - table[i].b.tm_min[j]);
				}
			}	
		}
	}

	std::cout << "Количество экзаменов по информатике: " << pointer << "\n";
	std::cout << "Общее время длительности экзаменов: " << total_time << "\n";
	menu(table, number);
}

void Find_duration(timetable *table, int number)
{
	int max = table[0].e.tm_hour[0];
	int hours = 0;
	int mins = 0;

	for (size_t i = 0; i < number; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (table[i].e.tm_hour[j] > max)
			{
				hours = table[i].e.tm_hour[j];
				mins = table[i].e.tm_min[j];
			}
		}
	}

	std::cout << "Самое позднее время окончания экзамена (ЧЧММ) " << hours << mins << "\n";
	menu(table, number);
}

void Save_new(timetable *table, int number, std::string file_name)
{
	std::cout << "Сохранение в файл " << file_name << " !" << "\n";

	std::ofstream database;
	database.open(file_name, std::ios::app);
	for (size_t i = 0; i < number; i++)
	{
		database << table[i].b.tm_mday;
		database << table[i].b.tm_mon;
		database << table[i].b.tm_year << " ";
		database << table[i].b.tm_sec;
		database << table[i].b.tm_min[0];
		database << table[i].b.tm_hour[0] << " ";
		database << table[i].b.tm_min[1];
		database << table[i].b.tm_hour[1] << " ";
		database << table[i].b.tm_min[2];
		database << table[i].b.tm_hour[2] << " ";
		database << table[i].e.tm_mday;
		database << table[i].e.tm_mon;
		database << table[i].e.tm_year << " ";
		database << table[i].e.tm_sec;
		database << table[i].e.tm_min[0];
		database << table[i].e.tm_hour[0] << " ";
		database << table[i].e.tm_min[1];
		database << table[i].e.tm_hour[1] << " ";
		database << table[i].e.tm_min[2];	
		database << table[i].e.tm_hour[2] << " ";
		database << table[i].tm_wday << " ";
		database << table[i].subject << " ";
		database << table[i].lastname << " ";
		database << table[i].firstname << " ";
		database << table[i].secondname << " ";
		database << table[i].group << " ";
		database << table[i].aud_number << " ";
		database << "====================" << " ";
	}
	std::cout << "Успешная запись!" << "\n";
}

void Save_in_diff(timetable *table, int number)
{
	std::cout << "Сохранение в файлы по дням недели!" << "\n";
	for (size_t i = 0; i < number; i++)
	{
		if (table[i].tm_wday == 1)
		{
			std::string file_name = "1";
			Save_new(table, number, file_name);
		}
		else if (table[i].tm_wday == 2)
		{
			std::string file_name = "2";
			Save_new(table, number, file_name);
		}
		else if (table[i].tm_wday == 3)
		{
			std::string file_name = "3";
			Save_new(table, number, file_name);
		}
		else if (table[i].tm_wday == 4)
		{
			std::string file_name = "4";
			Save_new(table, number, file_name);
		}
		else if (table[i].tm_wday == 5)
		{
			std::string file_name = "5";
			Save_new(table, number, file_name);
		}
		else if (table[i].tm_wday == 6)
		{
			std::string file_name = "6";
			Save_new(table, number, file_name);
		}
		else if (table[i].tm_wday == 7)
		{
			std::string file_name = "7";
			Save_new(table, number, file_name);
		}
	}
	std::cout << "Успешное создание новых файлов!" << "\n";
	menu(table, number);
}

void Read(timetable *table, int number)
{
	std::cout << "Считывание из файла" << "\n";
	std::cout << "Выберете имя файла!" << "\n";
	std::string file_name;
	std::cin >> file_name;
	
	std::ifstream database;
	database.open(file_name);
	for (size_t i = 0; i < number; i++)
	{
		database >> table[i].b.tm_mday;
		database >> table[i].b.tm_mon;
		database >> table[i].b.tm_year;
		database >> table[i].b.tm_sec;
		database >> table[i].b.tm_min[0];
		database >> table[i].b.tm_hour[0];
		database >> table[i].b.tm_min[1];
		database >> table[i].b.tm_hour[1];
		database >> table[i].b.tm_min[2];
		database >> table[i].b.tm_hour[2];
		database >> table[i].e.tm_mday;
		database >> table[i].e.tm_mon;
		database >> table[i].e.tm_year;
		database >> table[i].e.tm_sec;
		database >> table[i].e.tm_min[0];
		database >> table[i].e.tm_hour[0];
		database >> table[i].e.tm_min[1];
		database >> table[i].e.tm_hour[1];
		database >> table[i].e.tm_min[2];
		database >> table[i].e.tm_hour[2];
		database >> table[i].tm_wday;
		database >> table[i].subject;
		database >> table[i].lastname;
		database >> table[i].firstname;
		database >> table[i].secondname;
		database >> table[i].group;
		database >> table[i].aud_number;
		database >> table[i].enter;
	}
	std::cout << "Успешное считывание!" << "\n";
	menu(table, number);
}

void menu(timetable *table, int number)
{
pointer1:
	std::cout << "Сделайте выбор" << "\n";
	std::cout << "1. Ввести информацию" << "\n" << "2. Считать информацию" << "\n";
	int choice1 = 0;
	std::cin >> choice1;
	if (choice1 == 1)
	{
		system("cls");
		std::cout << "Введите данные: " << "\n" << "\n";
		Input(table, number);
		Save_in(table, number);
	}
	else if (choice1 == 2)
	{
		system("cls");
		Read(table, number);
	}
	else
	{
		system("cls");
		std::cout << "Некорректный ввод!" << "\n";
		goto pointer1;
	}


pointer:
	int choice = 0;
	std::cout << "1. Найти число экзаменов по информатике и общую длительность." << "\n" << "2. Найти самое позднее время окончания экзамена (ЧЧММ)" << "\n" << "3. Распределить данные по файлам." << "\n";
	std::cin >> choice;
	if (choice == 1)
	{
		system("cls");
		Find_inf(table, number);
	}
	else if (choice == 2)
	{
		system("cls");
		Find_duration(table, number);
	}
	else if (choice == 3)
	{
		system("cls");
		Save_in_diff(table, number);
	}
	else
	{
		system("cls");
		std::cout << "Некорректный ввод!" << "\n";
		goto pointer;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Сколько записей вы хотите записать в файл?" << "\n";

	int number = 0;

	std::cin >> number;
	timetable *table = new timetable[number];
}
	
	
	


