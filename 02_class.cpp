#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        this->day = 20;
        this->month = 8;
        this->year = 2001;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter date : ";
        cin >> this->day;
        cout << "Enter month : ";
        cin >> this->month;
        cout << "Enter year : ";
        cin >> this->year;
    }

    void printDateOnConsole()
    {
        cout << "===========================" << endl;
        cout << "Your Date = " << this->day << " - " << this->month << " - " << this->year << endl;
        cout << "Leap Year = " << (isLeapYear() ? "Yes" : "No") << endl;
        cout << "===========================" << endl;
    }

    bool isLeapYear()
    {
        if (this->year % 400 == 0)
        {
            return true;
        }
        else if (this->year % 4 == 0 && this->year % 100 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int menu()
{
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Accept Date" << endl;
    cout << "2. Display Date" << endl;
    cout << "Enter the choice = ";
    cin >> choice;
    return choice;
}

int main()
{
    Date d;
    d.initDate();
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            d.acceptDateFromConsole();
            break;
        case 2:
            d.printDateOnConsole();
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app" << endl;
    return 0;
}