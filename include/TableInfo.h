#pragma once
#include <string>
using namespace std;

// Âñòàâêà
string getIndertData(string& table, string& photoFileName, string& driverServiceNumber);

// Óäàëåíèå èç òàáëèöû
string getDeleteData(string& table, string& column);


string getUpdateValue(string& table, string& column, string& value, string& columnToChange);

// Âåðíóòü äàííûå ïî âñåì òàáëèöàì
string getSelectData(int& columnNumber, string& columnNames);

// Âåðíóòü íîìåð âîäèòåëÿ
string getDriverServiceNumber();

// Âåðíóòü íîìåð
string getCarNumber();

// Âåðíóòü ïðîìåæóòîê âðåìåíè
string getPeriodData();

// Ìåíþ äëÿ àäìèíà
void Menu();
