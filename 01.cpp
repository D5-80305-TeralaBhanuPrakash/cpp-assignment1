#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *d1)
{
    d1->day = 20;
    d1->month = 8;
    d1->year = 2001;
}

void acceptDateFromConsole(struct Date *d1)
{
    cout << "Enter date : ";
    cin >> d1->day;
    cout << "Enter month : ";
    cin >> d1->month;
    cout << "Enter year : ";
    cin >> d1->year;
}

void printDateOnConsole(struct Date d1)
{
    cout << "===========================" << endl;
    cout << "Your Date = " << d1.day << " - " << d1.month << " - " << d1.year << endl;
    cout << "===========================" << endl;
}

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
    struct Date d;
    initDate(&d);
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            acceptDateFromConsole(&d);
            break;
        case 2:
            printDateOnConsole(d);
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app" << endl;
    return 0;
}