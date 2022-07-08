#include <iostream>
using namespace std;
class date
{
public:
    int day, month, year;
    static char count;
    void input(date);
    void print();
};
char date::count='/';

void date::input(date d)
{
    day = d.day;
    month = d.month;
    year = d.year;
}
void date::print()
{
    cout << "the enter date is : ";
    cout << "day" << day << endl;
    cout << "month" << month << endl;
    cout << "year" << year << endl;
    cout<<"the date is :" <<day<<count<<month<<count<<year;
}
int main()
{
    cout << "enter the date :" << endl;
    class date d1;
    cin >> d1.day >> d1.month >> d1.year;
    d1.input(d1);
    d1.print();

    return 0;
}