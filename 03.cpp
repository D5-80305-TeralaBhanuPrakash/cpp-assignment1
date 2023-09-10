#include <iostream>
using namespace std;
class Student
{
private:
    int roll_no;
    string name;
    double marks;

public:
    void initStudent()
    {
        this->roll_no = 00000;
        this->name = "xxxxxx";
        this->marks = 0.0;
    }

    void acceptStudentFromConsole()
    {
        cout << "Enter roll no : ";
        cin >> this->roll_no;
        cout << "Enter name : ";
        cin >> this->name;
        cout << "Enter marks : ";
        cin >> this->marks;
    }

    void printStudentOnConsole()
    {
        cout << "=======================" << endl;
        cout << "Roll No: " << this->roll_no << endl;
        cout << "Name: " << this->name << endl;
        cout << "Marks: " << this->marks << endl;
        cout << "===========================" << endl;
    }
};

int menu()
{
    int choice;
    cout << "0. Exit" << endl;
    cout << "1. Accept Data" << endl;
    cout << "2. Display Data" << endl;
    cout << "Enter the choice = ";
    cin >> choice;
    return choice;
}

int main()
{
    Student s;
    s.initStudent();
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            s.acceptStudentFromConsole();
            break;
        case 2:
            s.printStudentOnConsole();
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
        }
    }
    cout << "Thank you for using our app" << endl;
    return 0;
}