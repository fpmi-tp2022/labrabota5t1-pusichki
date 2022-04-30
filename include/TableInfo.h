// autoparkUI.h
// lab5

#pragma once
#include <string>
using namespace std;

// Вставка
string getIndertData(string& table, string& photoFileName, string& driverServiceNumber);

// Удаление из таблицы
string getDeleteData(string& table, string& column);


string getUpdateValue(string& table, string& column, string& value, string& columnToChange);

// Вернуть данные по всем таблицам
string getSelectData(int& columnNumber, string& columnNames);

// Вернуть номер водителя
string getDriverServiceNumber();

// Вернуть номер
string getCarNumber();

// Вернуть промежуток времени
string getPeriodData();

// Меню для админа
void Menu();
