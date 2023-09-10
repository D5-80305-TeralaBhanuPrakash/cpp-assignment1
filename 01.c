#include <stdio.h>

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
    printf("Enter the day = ");
    scanf("%d", &d1->day);
    printf("Enter the month = ");
    scanf("%d", &d1->month);
    printf("Enter the year = ");
    scanf("%d", &d1->year);
}

void printDateOnConsole(struct Date d1)
{
    printf("=====================\n");
    printf("%d-%d-%d", d1.day, d1.month, d1.year);
    printf("=====================\n");
}

int menu()
{
    int choice;
    printf("0. Exit");
    printf("1. Accept Date");
    printf("2. Display Date");
    printf("Enter the choice = ");
    scanf("%d", choice);
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
            printf("Wrong choice entered ...:(");
            break;
        }
    }
    printf("Thank you for using our app");
    return 0;
}