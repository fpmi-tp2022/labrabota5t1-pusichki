// main.cpp
// lab5

#include <iostream>
#include <sqlite3.h>
#include <string>
#include "DatabaseInfo.h"
#include "TableInfo.h"

using namespace std;



int main()
{


    sqlite3* db;


    int rc = sqlite3_open("database3.db", &db);



    if (SQLITE_OK != rc)
    {
        cerr << "Cannot open database: " << sqlite3_errmsg(db) << endl;
        sqlite3_close(db);
        return -1;
    }

    bool c = true;

    while (c)
    {
        int o = 0;
        printAdminMenu();
        cin >> o;

       
        if(o == 1)
        {
            string table = "";
            string insertStr = "";
            string driverServiceNumber = "";
            string photoFileName = "";
            insertStr = getIndertData(table, photoFileName, driverServiceNumber);
            string photoFileNameWithPath = "./img//" + photoFileName;
            insert(db, table, insertStr, photoFileNameWithPath, driverServiceNumber);
            break;
        }
        if (o == 2)
        {
            string table = "";
            string column = "";
            string value = "";
            string columnToChange = "";
            string newValue = getUpdateValue(table, column, value, columnToChange);
            update(db, table, column, value, columnToChange, newValue);
            break;
        }
        if (o == 3)
        {
            string table = "";
            string column = "";
            string deleteValue = getDeleteData(table, column);
            deleteRecord(db, table, column, deleteValue);
            break;
        }
        if (o == 4)
        {
            cout << "1: Show table" << endl;
            cout << "2: Show executed orders" << endl;
            cout << "3: Show distance and weight" << endl;
            cout << "4: Show number of travels and sum" << endl;
            cout << "5: Show all executes of driver with minimal sum" << endl;
            cout << "6: Show information about car with the most distance" << endl;

            int ch = 0;
            cin >> ch;

            
            if(ch ==  1)
            {
                int columnNumber = 0;
                string columnNames = "";
                string table = getSelectData(columnNumber, columnNames);
                cout << columnNames << endl;
                AllRecords(db, table, columnNumber);
                break;
            }
            if (ch == 2)
            {
                string driverServiceNumber = getDriverServiceNumber();
                string period = getPeriodData();
                string columnNames = "|date|second_name_driver|number_of_car|killometrage|cargo_weight|cost|";
                cout << columnNames << endl;
                getOrdersByDriver(db, driverServiceNumber, period);
                break;
            }
            if (ch == 3)
            {
                string carNumber = getCarNumber();
                getMileageByCar(db, carNumber);
                getTransportedWeightByCar(db, carNumber);
                break;
            }
            if (ch == 4)
            {
                getNumOfTripsTransportedWeightEarningsOfAllDrivers(db);
                break;
            }
            if (ch == 5)
            {
                getDriverWithMinTripsNumInfo(db);
                break;
            }
            if (ch == 6)
            {
                getCarWithMaxMileage(db);
                break;
            }
            else
            {
                cout << "You enter wrong number" << endl;
                break;
            }
            
            break;
        }
        if (o == 5)
        {
            c = false;
            break;
        }
        else
        {
            cout << "You enter wrong number" << endl;
            break;
        }
        

    }

    sqlite3_close(db);
    return 0;
}
