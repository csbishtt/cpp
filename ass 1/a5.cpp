#include <iostream>
#include <string.h>
using namespace std;

class ac
{
    int acno, balance, cash;
    char name[10], actype[10];

public:
    void getdata();
    void calc();
    void display();
};

void ac::getdata()
{

    cout << "enter the account number" << endl;
    cin >> acno;

    cout << "enter the holder name" << endl;
    cin >> name;

    cout << "enter the account tyoe" << endl;
    cin >> actype;

    cout << "enter the balance" << endl;
    cin >> balance;
}
void ac::calc()
{
    int choice;
m:
    cout << "********menu********" << endl;
    cout << "1.deposit \n2.withdraw\n3.details\n4.exit" << endl;
    cout << "enter your choice :" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:

        cout << "enter the amount you want deposit :" << endl;
        cin >> cash;
        balance = balance + cash;
        cout << "total balance is :" << balance << endl;
        break;

    case 2:
        cout << "enter the amount you want withdraw :" << endl;
        cin >> cash;
        balance = balance - cash;
        cout << "total balance is :" << balance << endl;
        break;
    case 3:
        cout << "the account number is : " << acno << endl;
        cout << "the holder name is : " << name << endl;
        cout << "the account type is : " << actype << endl;
        cout << "the total balance is : " << balance << endl;

    case 4:
        exit(1);
        break;

    default:
        cout << "enter correct choice";
    }

    goto m;
}

void ac::display()
{
}
int main()
{
    ac a;
    a.getdata();
    a.calc();
    a.display();
    return 0;
}