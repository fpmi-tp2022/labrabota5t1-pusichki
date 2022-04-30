
#include <iostream>
#include <stdio.h>
#include <string>
#include "TableInfo.h"
using namespace std;


string getIndertData(string& table, string& photoFileName, string& driverServiceNumber)
{
    string data = "";

    cout << "1: Enter data in users" << endl;
    cout << "2: Enter data in drivers" << endl;
    cout << "3: Enter data in cars" << endl;
    cout << "4: Enter data in completed_orders" << endl;

    int o = 0;
    cin >> o;

    
    if(o == 1)
    {
        table = "users";
        string login;
        string serviceNumber;
        cout << "Enter User login" << endl;
        cin >> login;
        cout << "Enter ID number" << endl;
        cin >> serviceNumber;
        data = "'" + login + "', '" + serviceNumber + "'";
       
    }
    else  if (o == 2)
    {
        table = "drivers";
        string lastName;
        string category;
        string workExperience;
        string address;
        string birthYear;
        string carNumber;
        cout << "Enter ID number" << endl;
        cin >> driverServiceNumber;
        cout << "Enter second name" << endl;
        cin >> lastName;
        cout << "Enter category" << endl;
        cin >> category;
        cout << "Enter experience" << endl;
        cin >> workExperience;
        cout << "Enter address" << endl;
        cin >> address;
        cout << "Enter age of birth" << endl;
        cin >> birthYear;
        cout << "Enter number of car" << endl;
        cin >> carNumber;
        cout << "Enter image file photo" << endl;
        cin >> photoFileName;

        data = "'" + driverServiceNumber + "', '" + lastName + "', '" + category + "', '" + workExperience + "', '" + address + "', '" + birthYear + "', '" + carNumber + "', 'Нет фото'";
        
    }
    else if (o == 3)
    {
        table = "cars";
        string carNumber;
        string brand;
        string mileage;
        string capacity;
        cout << "Enter number of car" << endl;
        cin >> carNumber;
        cout << "Enter brend" << endl;
        cin >> brand;
        cout << "Enter mileage" << endl;
        cin >> mileage;
        cout << "Enter capacity" << endl;
        cin >> capacity;
        data = "'" + carNumber + "', '" + brand + "', '" + mileage + "', '" + capacity + "'";
       
    }
    else if (o == 4)
    {
        table = "completed_orders";
        string id;
        string d;
        string sur;
        string carNumber;
        string mile;
        string cargoWeight;
        string cost;
        string serviceNumber;
        cout << "Enter number" << endl;
        cin >> id;
        cout << "Enter date" << endl;
        cin >> d;
        cout << "Enter surname" << endl;
        cin >> sur;
        cout << "Enter number of car" << endl;
        cin >> carNumber;
        cout << "Enter mileage" << endl;
        cin >> mile;
        cout << "Enter weight" << endl;
        cin >> cargoWeight;
        cout << "Enter cost of travel" << endl;
        cin >> cost;
        cout << "Enter number of driver" << endl;
        cin >> serviceNumber;
        data = "'" + id + "', '" + d + "', '" + sur + "', '" + carNumber + "', '" + mile + "', '" + cargoWeight + "', '" + cost + "', '" + serviceNumber + "'";
    
    }
    else
    {
        cout << "You entered wrong number" << endl;
        
    }
    

    return data;
}


string getDeleteData(string& table, string& column)
{
    string data = "";

    cout << "1: Delete from users" << endl;
    cout << "2: Delete from drivers" << endl;
    cout << "3: Delete from cars" << endl;
    cout << "4: Delete from completed_orders" << endl;

    int o = 0;
    cin >> o;

   
    if(o == 1)
    {
        table = "users";
        column = "login";
        cout << "Enter login" << endl;
        cin >> data;
        
    }
    else if (o == 2)
    {
        table = "drivers";
        column = "service_number";
        cout << "Enter driver number" << endl;
        cin >> data;
        
    }
    else  if (o == 3)
    {
        table = "cars";
        column = "car_number";
        cout << "Enter car number" << endl;
        cin >> data;
        
    }
    else if (o == 4)
    {
        table = "completed_orders";
        column = "id";
        cout << "Enter number of order" << endl;
        cin >> data;
        
    }
    else
    {
        cout << "You enter wrong number" << endl;
        
    }
    

    return data;
}

string getUpdateValue(string& table, string& column, string& value, string& columnToChange)
{
    string data = "";

    cout << "1: Update in users" << endl;
    cout << "2: Update in drivers" << endl;
    cout << "3: Update in cars" << endl;
    cout << "4: Update in completed_orders" << endl;

    int o = 0;
    cin >> o;

    
    if(o ==1)
    {
        table = "users";
        column = "login";
        cout << "Enter login" << endl;
        cin >> value;
        cout << "Enter name of column" << endl;
        cin >> columnToChange;
        cout << "Enter new data" << endl;
        cin >> data;
        
    }
    else if (o == 2)
    {
        table = "drivers";
        column = "service_number";
        cout << "Enter number of driver" << endl;
        cin >> value;
        cout << "Enter name of column" << endl;
        cin >> columnToChange;
        cout << "Введите новое значение" << endl;
        cin >> data;
        
    }
    else if (o == 3)
    {
        table = "cars";
        column = "car_number";
        cout << "Enter number of car" << endl;
        cin >> value;
        cout << "Enter name of column" << endl;
        cin >> columnToChange;
        cout << "Enter new data" << endl;
        cin >> data;
        
    }
    else if (o == 4)
    {
        table = "completed_orders";
        column = "id";
        cout << "Enter number of order" << endl;
        cin >> value;
        cout << "Enter name of column" << endl;
        cin >> columnToChange;
        cout << "Enter new column" << endl;
        cin >> data;
        
    }
    else
    {
        cout << "Выбранной опции не существует" << endl;
        
    }
    

    return data;
}

string getSelectData(int& columnNumber, string& columnNames)
{
    string data = "";

    cout << "1: Print data from users" << endl;
    cout << "2: Print data from drivers" << endl;
    cout << "3: Print data from cars" << endl;
    cout << "4: Print data from completed_orders" << endl;

    int o = 0;
    cin >> o;

    
    if(o == 1)
    {
        data = "users";
        columnNames = "|login|drivers_service_number|";
        columnNumber = 2;
        
    }
    else if (o == 2)
    {
        data = "drivers";
        columnNames = "|service_number|last_name|category|work_experience|address|birth_year|cars_car_number|";
        columnNumber = 7;
        
    }
    else if (o == 3)
    {
        data = "cars";
        columnNames = "|car_number|brand|mileage|capacity|";
        columnNumber = 4;
        
    }
    else if (o == 4)
    {
        data = "completed_orders";
        columnNames = "|id|date|driver_last_name|car_number|kilometrage|cargo_weight|cost|driver_service_number|";
        columnNumber = 8;
        
    }
    else
    {
        cout << "You entered wrong data" << endl;
        
    }
    

    return data;
}

string getDriverServiceNumber()
{
    cout << "Enter number of driver" << endl;
    string driverServiceNumber = "";
    cin >> driverServiceNumber;
    return driverServiceNumber;
}


void printDriverMenu()
{
    cout << "Menu:\n";
    cout << "1: Show orders in periodд\n";
    cout << "2: Show number of travels\n";
    cout << "3: Check weight of all orders\n";
    cout << "4: Show sum for all time\n";
    cout << "5: Show sum for period\n";
    cout << "6: Show info of car with max mileage\n";
    cout << "7: Exit\n";
}             

string getCarNumber()
{
    cout << "Enter car number" << endl;
    string carNumber = "";
    cin >> carNumber;
    return carNumber;
}


string getPeriodData()
{
   
    string data;
    
    
        cout << "Enter first date" << endl;
        string firstDate = "";
        cin >> firstDate;
        cout << "Enter second date" << endl;
        string secondDate = "";
        cin >> secondDate;
        data = "'" + firstDate + "' and '" + secondDate + "'";
    

    return data;
}

void Menu()
{
    cout << "Admin menu:" << endl;
    cout << "1: Insert data" << endl;
    cout << "2: Update data" << endl;
    cout << "3: Delete data" << endl;
    cout << "4: Select data" << endl;
    cout << "5: Exit" << endl;
}
