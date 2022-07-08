#include <iostream>
#include <string.h>
using namespace std;
class complex
{

    int marks[5];
    char name[10];
    int sum = 0;
    int avg;

public:
    void getdata()
    {
        cout << "enter name :";
        cin >> name;
        cout << "enter marks in five subject" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void display()
    {
        cout << "name :" << name << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "mark " << i + 1 << "is :" << marks[i] << endl;
            sum += marks[i];
        }
        
        avg = sum / 5;
        cout << "average of 5 subject: " << avg<<endl;
    }
};

int main()
{
    complex c1[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"\nenter "<<i+1<<" student marks"<<endl;
        c1[i].getdata();
        c1[i].display();
    }

    return 0;
}