// Lab9_C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

struct timetable
{
	string name, secondname, lastname, group, subject[3];
	int  day, month, year, minutes[3], hours[3], minutes_end[3], hours_end[3], audit, week;
};

void menu(timetable *time, int number);

void Data_Input(timetable *time, int number)
{
	system("cls");
	for (size_t i = 0; i < number; i++)
	{
		std::cout << "Имя преподавателя: " << "\n";
		std::cin >> time[i].name;
		std::cout << "\n";

		std::cout << "Отчество преподавателя: " << "\n";
		std::cin >> time[i].secondname;
		std::cout << "\n";

		std::cout << "Фамилия преподавателя: " << "\n";
		std::cin >> time[i].lastname;
		std::cout << "\n";

		std::cout << "Предмет (первый экзамен): " << "\n";
		std::cin >> time[i].subject[0];
		std::cout << "\n";

		std::cout << "Предмет (второй экзамен): " << "\n";
		std::cin >> time[i].subject[1];
		std::cout << "\n";

		std::cout << "Предмет (второй экзамен): " << "\n";
		std::cin >> time[i].subject[2];
		std::cout << "\n";

		std::cout << "Группа: " << "\n";
		std::cin >> time[i].group;
		std::cout << "\n";

		std::cout << "Аудитория:" << "\n";
		std::cin >> time[i].audit;
		std::cout << "\n";

		std::cout << "День: " << "\n";
		std::cin >> time[i].day;
		std::cout << "\n";

		std::cout << "День недели" << "\n";
		std::cin >> time[i].week;

		std::cout << "Месяц: " << "\n";
		std::cin >> time[i].month;
		std::cout << "\n";

		std::cout << "Год: " << "\n";
		std::cin >> time[i].year;
		std::cout << "\n";

		std::cout << "Начало экзамена" << "\n";

		std::cout << "Минуты (первый экзамен): " << "\n";
		std::cin >> time[i].minutes[0];
		std::cout << "\n";
		std::cout << "Минуты (второй экзамен) " << "\n";
		std::cin >> time[i].minutes[1];
		std::cout << "\n";
		std::cout << "Минуты (третий экзамен)" << "\n";
		std::cin >> time[i].minutes[2];
		std::cout << "\n";

		std::cout << "Час (первый экзамен)" << "\n";
		std::cin >> time[i].hours[0];
		std::cout << "\n";
		std::cout << "Час (второй экзамен)" << "\n";
		std::cin >> time[i].hours[1];
		std::cout << "\n";
		std::cout << "Час (третий экзамен)" << "\n";
		std::cin >> time[i].hours[2];
		std::cout << "\n";

		std::cout << "Конец экзамена" << "\n";

		std::cout << "Минуты (первый экзамен): " << "\n";
		std::cin >> time[i].minutes_end[0];
		std::cout << "\n";
		std::cout << "Минуты (второй экзамен) " << "\n";
		std::cin >> time[i].minutes_end[1];
		std::cout << "\n";
		std::cout << "Минуты (третий экзамен)" << "\n";
		std::cin >> time[i].minutes_end[2];
		std::cout << "\n";

		std::cout << "Час (первый экзамен)" << "\n";
		std::cin >> time[i].hours_end[0];
		std::cout << "\n";
		std::cout << "Час (второй экзамен)" << "\n";
		std::cin >> time[i].hours_end[1];
		std::cout << "\n";
		std::cout << "Час (третий экзамен)" << "\n";
		std::cin >> time[i].hours_end[2];
		std::cout << "\n";
	}
	menu(time, number);
}

void Data_Output(timetable *time, int number)
{
	system("cls");
	for (size_t i = 0; i < number; i++)
	{
		std::cout << "Имя преподавателя: " << "\n";
		std::cout << time[i].name;
		std::cout << "\n";

		std::cout << "Отчество преподавателя: " << "\n";
		std::cout << time[i].secondname;
		std::cout << "\n";

		std::cout << "Фамилия преподавателя: " << "\n";
		std::cout << time[i].lastname;
		std::cout << "\n";

		std::cout << "Предмет (первый экзамен): " << "\n";
		std::cout << time[i].subject[0];
		std::cout << "\n";

		std::cout << "Предмет (второй экзамен): " << "\n";
		std::cout << time[i].subject[1];
		std::cout << "\n";

		std::cout << "Предмет (второй экзамен): " << "\n";
		std::cout << time[i].subject[2];
		std::cout << "\n";

		std::cout << "Группа: " << "\n";
		std::cout << time[i].group;
		std::cout << "\n";

		std::cout << "Аудитория:" << "\n";
		std::cout << time[i].audit;
		std::cout << "\n";

		std::cout << "День: " << "\n";
		std::cout << time[i].day;
		std::cout << "\n";

		std::cout << "Месяц: " << "\n";
		std::cout << time[i].month;
		std::cout << "\n";

		std::cout << "Год: " << "\n";
		std::cout << time[i].year;
		std::cout << "\n";

		std::cout << "Начало экзамена." << "\n";

		std::cout << "Минуты (первый экзамен): " << "\n";
		std::cout << time[i].minutes[0];
		std::cout << "\n";
		std::cout << "Минуты (второй экзамен) " << "\n";
		std::cout << time[i].minutes[1];
		std::cout << "\n";
		std::cout << "Минуты (третий экзамен)" << "\n";
		std::cout << time[i].minutes[2];
		std::cout << "\n";

		std::cout << "Час (первый экзамен)" << "\n";
		std::cout << time[i].hours[0];
		std::cout << "\n";
		std::cout << "Час (второй экзамен)" << "\n";
		std::cout << time[i].hours[1];
		std::cout << "\n";
		std::cout << "Час (третий экзамен)" << "\n";
		std::cout << time[i].hours[2];
		std::cout << "\n";

		std::cout << "Конец экзамена." << "\n";

		std::cout << "Минуты (первый экзамен): " << "\n";
		std::cout << time[i].minutes_end[0];
		std::cout << "\n";
		std::cout << "Минуты (второй экзамен) " << "\n";
		std::cout << time[i].minutes_end[1];
		std::cout << "\n";
		std::cout << "Минуты (третий экзамен)" << "\n";
		std::cout << time[i].minutes_end[2];
		std::cout << "\n";

		std::cout << "Час (первый экзамен)" << "\n";
		std::cout << time[i].hours_end[0];
		std::cout << "\n";
		std::cout << "Час (второй экзамен)" << "\n";
		std::cout << time[i].hours_end[1];
		std::cout << "\n";
		std::cout << "Час (третий экзамен)" << "\n";
		std::cout << time[i].hours_end[2];
		std::cout << "\n";
	}
	menu(time, number);
}

void Data_Save(timetable *time, int number)
{
	std::cout << "Выберите название файла" << "\n";
	string choice;
	std::cin >> choice;

	ofstream database;
	database.open(choice);

	for (size_t i = 0; i < number; i++)
	{
		database << time[i].name << " ";
		database << time[i].secondname << " ";
		database << time[i].lastname << " ";
		database << time[i].subject[0] << " ";
		database << time[i].subject[1] << " ";
		database << time[i].subject[2] << " ";
		database << time[i].group << " " ;
		database << time[i].audit << " " ;
		database << time[i].day << " ";
		database << time[i].month << " ";
		database << time[i].year << " ";
		database << time[i].minutes[0] << " ";
		database << time[i].minutes[1] << " ";
		database << time[i].minutes[2] << " ";
		database << time[i].hours[0] << " ";
		database << time[i].hours[1] << " ";
		database << time[i].hours[2] << " ";
		database << time[i].minutes_end[0] << " ";
		database << time[i].minutes_end[1] << " ";
		database << time[i].minutes_end[2] << " ";
		database << time[i].hours_end[0] << " ";
		database << time[i].hours_end[1] << " ";
		database << time[i].hours_end[2] << " ";
	}

	std::cout << "Успешная запись!" << "\n";
	database.close();
	menu(time, number);
}

void Data_New_Save(timetable *time, int number, string file_name)
{
	std::cout << "Создание файла " << file_name << "\n";
	ofstream database;
	database.open(file_name);

	for (size_t i = 0; i < number; i++)
	{
		database << time[i].name << " ";
		database << time[i].secondname << " ";
		database << time[i].lastname << " ";
		database << time[i].subject[0] << " ";
		database << time[i].subject[1] << " ";
		database << time[i].subject[2] << " ";
		database << time[i].group << " ";
		database << time[i].audit << " ";
		database << time[i].day << " ";
		database << time[i].month << " ";
		database << time[i].year << " ";
		database << time[i].minutes[0] << " ";
		database << time[i].minutes[1] << " ";
		database << time[i].minutes[2] << " ";
		database << time[i].hours[0] << " ";
		database << time[i].hours[1] << " ";
		database << time[i].hours[2] << " ";
		database << time[i].minutes_end[0] << " ";
		database << time[i].minutes_end[1] << " ";
		database << time[i].minutes_end[2] << " ";
		database << time[i].hours_end[0] << " ";
		database << time[i].hours_end[1] << " ";
		database << time[i].hours_end[2] << " ";
	}

	std::cout << "Успешная запись!" << "\n";
	database.close();
}

void Data_Read(timetable *time, int number)
{
	system("cls");
	std::cout << "Выберите название файла" << "\n";
	string choice;
	std::cin >> choice;

	ifstream database;
	database.open(choice);

	for (size_t i = 0; i < number; i++)
	{
		database >> time[i].name;
		database >> time[i].secondname;
		database >> time[i].lastname;
		database >> time[i].subject[0];
		database >> time[i].subject[1];
		database >> time[i].subject[2];
		database >> time[i].group;
		database >> time[i].audit;
		database >> time[i].day;
		database >> time[i].month;
		database >> time[i].year;
		database >> time[i].minutes[0];
		database >> time[i].minutes[1];
		database >> time[i].minutes[2];
		database >> time[i].hours[0];
		database >> time[i].hours[1];
		database >> time[i].hours[2];
		database >> time[i].minutes_end[0];
		database >> time[i].minutes_end[1];
		database >> time[i].minutes_end[2];
		database >> time[i].hours_end[0];
		database >> time[i].hours_end[1];
		database >> time[i].hours_end[2];
	}

	std::cout << "Успешное считывание" << "\n";
	database.close();
	menu(time, number);
}

void Informatic(timetable *time, int number)
{
	system("cls");
	int pointer = 0;
	int total_time = 0;

	for (size_t i = 0; i < number; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (time[i].subject[j] == "Informatic")
			{
				pointer++;
				total_time += (time[i].hours_end[j] - time[i].hours[j]) * 60 + (time[i].minutes_end[j] - time[i].minutes[j]);
			}
		}
	}

	std::cout << "Количество экзаменов по информатике " << pointer;
	std::cout << "Общее время длительности " << total_time;
	menu(time, number);
}

void Late(timetable *time, int number)
{
	system("cls");
	int max = 0;
	std::cout << "Введите день" << "\n";
	int day;
	std::cin >> day;
	int result = 0;

	for (size_t i = 0; i < number; i++)
	{
		if (day == time[i].day)
		{
			for (size_t j = 0; j < 3; j++)
			{
				if (time[i].hours[j] > max)
				{
					result = time[i].hours[j];
				}
			}
		}
	}
	std::cout << "Самое позднее время окончания " << result << "\n";
	menu(time, number);
}

void Data_Files(timetable *time, int number)
{
	system("cls");
	string file_name;
	for (size_t i = 0; i < number; i++)
	{
		if (time[i].week == 1)
		{
			file_name = "1";
			Data_New_Save(time, number, file_name);
		}
		else if (time[i].week == 2)
		{
			file_name = "2";
			Data_New_Save(time, number, file_name);
		}
		else if (time[i].week == 3)
		{
			file_name = "3";
			Data_New_Save(time, number, file_name);
		}
		else if (time[i].week == 4)
		{
			file_name = "4";
			Data_New_Save(time, number, file_name);
		}
		else if (time[i].week == 5)
		{
			file_name = "5";
			Data_New_Save(time, number, file_name);
		}
		else if (time[i].week == 6)
		{
			file_name = "6";
			Data_New_Save(time, number, file_name);
		}
		else if (time[i].week == 7)
		{
			file_name = "7";
			Data_New_Save(time, number, file_name);
		}
	}
	menu(time, number);
}

void menu(timetable *time, int number)
{

	std::cout << "Сделайте выбор:" << "\n";
	std::cout << "1. Внести данные" << "\n";
	std::cout << "2. Считать данные" << "\n";
	std::cout << "3. Общая длительность и экзамен по информатике" << "\n";
	std::cout << "4. Самое позднее время окончания экзамена" << "\n";
	std::cout << "5. Сохранить в разные файлы" << "\n";
	std::cout << "6. Вывести на экран данные" << "\n";
	std::cout << "7. Сохранить текущие данные" << "\n";

	int choice = 0;

	std::cin >> choice;
	if (choice == 1)
	{
		Data_Input(time, number);
	}
	else if (choice == 2)
	{
		Data_Read(time, number);
	}
	else if (choice == 3)
	{
		Informatic(time, number);
	}
	else if (choice == 4)
	{
		Late(time, number);
	}
	else if (choice == 5)
	{
		Data_Files(time, number);
	}
	else if (choice == 6)
	{
		Data_Output(time, number);
	}
	else if (choice == 7)
	{
		Data_Save(time, number);
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Начало работы." << "\n";
	std::cout << "Выберите количество записей" << "\n";

	int number = 0;

	std::cin >> number;

	timetable *time = new timetable[number];
	menu(time, number);
}

