#include <iostream>
#include <string.h>
using namespace std;

class ac
{
    int acno, balance, cash;
    char name[10], actype[10];

public:
    void getdata();
    void deposit();
    void withdraw();
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
void ac::deposit()
{
    cout << "enter the amount you want deposit :" << endl;
    cin >> cash;
    balance = balance + cash;
    cout << "total balance is :" << balance << endl;
}
    
void ac :: withdraw()
{
    cout << "enter the amount you want withdraw :" << endl;
    cin >> cash;
    balance = balance - cash;
    cout << "total balance is :" << balance << endl;
   
}

void ac::display()
{
    cout << "the account number is : " << acno << endl;
    cout << "the holder name is : " << name << endl;
    cout << "the account type is : " << actype << endl;
    cout << "the total balance is : " << balance << endl;
}
int main()
{
    ac a;
    a.getdata();
    a.deposit();
    a.withdraw();
    a.display();
    return 0;
}