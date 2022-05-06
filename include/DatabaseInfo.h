
#pragma once
#include <string>
#include "sqlite3.cpp"
using namespace std;


void insertImage(sqlite3* , string , string ); // ���� ����������� � �������


void insert(sqlite3* , string , string , string , string ); // ���� ������ � �������

void deleteRecord(sqlite3* , string , string , string ); // �������� ������ �� �������




void getNumOfTripsByDriver(sqlite3* , string ); // ������� ���������� ������� �� ��������


void getTransportedWeightByDriver(sqlite3* , string ); // ������� ��� ����� �� ��������


void getEarningsByDriver(sqlite3* db, string driverServiceNumber); // ����� �� ��������


void getDriverWithMinTripsNumInfo(sqlite3* db); // ���������� � �������� � ���������� ������ �������


void getCarWithMaxMileage(sqlite3* db); // ���������� � ������ � ���������� ��������

void update(sqlite3*, string, string, string, string, string); // ���������� ������ � �������


void Sel(sqlite3_stmt*, int); // ������� ������


void AllRecords(sqlite3*, string, int); // ����� ���� ������� �������


void getOrdersByDriver(sqlite3*, string, string); // ������� ������ �� ��������


void getMileageByCar(sqlite3*, string); //������� ������ ������


void getTransportedWeightByCar(sqlite3*, string); // ������� ����� ��� ����������� ������� ������

//�� ������� �������� � ����� ���������� �������, 
//����� ����� ������������ ������, ����� ������������ �����
void getNumOfTripsTransportedWeightEarningsOfAllDrivers(sqlite3*);
