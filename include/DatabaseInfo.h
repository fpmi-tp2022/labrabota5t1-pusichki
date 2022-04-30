
#pragma once
#include <string>
#include "sqlite3.h"
using namespace std;


void insertImage(sqlite3* , string , string ); // Ввод изображения в таблицу


void insert(sqlite3* , string , string , string , string ); // Ввод данных в таблицу

void deleteRecord(sqlite3* , string , string , string ); // Удаление данных из таблицы




void getNumOfTripsByDriver(sqlite3* , string ); // Вывести количество поездок по водителю


void getTransportedWeightByDriver(sqlite3* , string ); // Вывести вес груза по водителю


void getEarningsByDriver(sqlite3* db, string driverServiceNumber); // Сумма по водителю


void getDriverWithMinTripsNumInfo(sqlite3* db); // Информация о водители с наименьшим колвом поездок


void getCarWithMaxMileage(sqlite3* db); // Информация о машине с наибольшим пробегом

void update(sqlite3*, string, string, string, string, string); // Обновление данных в таблице


void Sel(sqlite3_stmt*, int); // Вывести данные


void AllRecords(sqlite3*, string, int); // Вывод всех записей таблицы


void getOrdersByDriver(sqlite3*, string, string); // Вывести данные по водителю


void getMileageByCar(sqlite3*, string); //ВЫвести пробег машины


void getTransportedWeightByCar(sqlite3*, string); // Вывести общий вес перевозимых машиной грузов

//по каждому водителю – общее количество поездок, 
//общую массу перевезенных грузов, сумму заработанных денег
void getNumOfTripsTransportedWeightEarningsOfAllDrivers(sqlite3*);
