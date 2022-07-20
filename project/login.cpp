#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;
class bank
{
    string name;
    int password;

public:
    void login();
    void registration();
    void forget_password();
};
void bank::login()
{
    string id;
    int pass;
    int count = 0;
    cout << "please enter the username and passwowrd :\n";
    cout << "username :";
    cin >> name;
    cout << "password :";
    cin >> password;
    ifstream fout("record.txt");
    while (fout >> id >> pass)
    {
        if (id == name && pass == password)
        {
            count++;
        }
    }
    fout.close();
    if (count == 1)
    {
        cout << "sucessfully login \n\n";
    }
    else
    {
        cout << "\t NOT EXIST! \n\n";
    }
};
void bank::registration()
{
    string id;
    int pass;
    cout << " enter the username and passwowrd :\n";
    cout << "username :";
    cin >> name;
    cout << "password :";
    cin >> password;
    ofstream sout("record.txt", ios::app);

    sout << name << " " << password << endl;
    sout.close();
}
void bank::forget_password()
{
    int option;
    cout << "\n*********forget the password*********" << endl;
    cout << "press 1 to search your id by usename \n";
    cout << "press 2 to go back to main menu\n";
    cout << "enter your choice : ";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        int id, count = 0;
        string pass, name1;

        cout << " enter the username you remember:";
        cin >> name1;

        ifstream fout("record.txt");

        while (fout >> pass >> id)
        {
            if (pass == name1)
            {
                count++;
            }
        }
        fout.close();
        if (count == 1)
        {
            cout << "sucessfully find \n";
            cout << "your password is : " << id << endl;
        }
        else
        {
            cout << "\t NOT EXIST! \n";
        }
    }

    case 2:
        break;
    }
}

int main()
{
    int choice;
    bank b;
    while (1)
    {
        cout << "***WELCOME TO THE LOGIN PAGE****\n";
        cout << "\t1 - LOGIN\n";
        cout << "\t2 - registration\n";
        cout << "\t3 - Forget Password\n";
        cout << "\t4 - Exit\n";
        cout << "\nenter yor choice :";
        cin >> choice;
        switch (choice)
        {
        case 1:
            system("cls");
            b.login();
            break;

        case 2:

            system("cls");
            b.registration();
            break;
        case 3:

            system("cls");
            b.forget_password();
            break;
        case 4:
            exit(0);

        default:
            cout << "enter select the option given above \n";
        }
    }
}
