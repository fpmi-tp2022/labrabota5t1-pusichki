
#pragma once
#include <string>
#include <sqlite3.h>
using namespace std;


void insertImage(sqlite3* , string , string ); // Ââîä èçîáðàæåíèÿ â òàáëèöó


void insert(sqlite3* , string , string , string , string ); // Ââîä äàííûõ â òàáëèöó

void deleteRecord(sqlite3* , string , string , string ); // Óäàëåíèå äàííûõ èç òàáëèöû




void getNumOfTripsByDriver(sqlite3* , string ); // Âûâåñòè êîëè÷åñòâî ïîåçäîê ïî âîäèòåëþ


void getTransportedWeightByDriver(sqlite3* , string ); // Âûâåñòè âåñ ãðóçà ïî âîäèòåëþ


void getEarningsByDriver(sqlite3* db, string driverServiceNumber); // Ñóììà ïî âîäèòåëþ


void getDriverWithMinTripsNumInfo(sqlite3* db); // Èíôîðìàöèÿ î âîäèòåëè ñ íàèìåíüøèì êîëâîì ïîåçäîê


void getCarWithMaxMileage(sqlite3* db); // Èíôîðìàöèÿ î ìàøèíå ñ íàèáîëüøèì ïðîáåãîì

void update(sqlite3*, string, string, string, string, string); // Îáíîâëåíèå äàííûõ â òàáëèöå


void Sel(sqlite3_stmt*, int); // Âûâåñòè äàííûå


void AllRecords(sqlite3*, string, int); // Âûâîä âñåõ çàïèñåé òàáëèöû


void getOrdersByDriver(sqlite3*, string, string); // Âûâåñòè äàííûå ïî âîäèòåëþ


void getMileageByCar(sqlite3*, string); //ÂÛâåñòè ïðîáåã ìàøèíû


void getTransportedWeightByCar(sqlite3*, string); // Âûâåñòè îáùèé âåñ ïåðåâîçèìûõ ìàøèíîé ãðóçîâ

//ïî êàæäîìó âîäèòåëþ – îáùåå êîëè÷åñòâî ïîåçäîê, 
//îáùóþ ìàññó ïåðåâåçåííûõ ãðóçîâ, ñóììó çàðàáîòàííûõ äåíåã
void getNumOfTripsTransportedWeightEarningsOfAllDrivers(sqlite3*);
