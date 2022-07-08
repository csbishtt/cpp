#include <iostream>
using namespace std;
class date
{
public:
    static int day, month, year;
    static char count;
    static void input(int, int, int);
    void print();
};
char date::count = '/';
int date::day;
int date::month;
int date::year;

void date::input(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
void date::print()
{
    cout << "the enter date is : "<<endl;
    cout << "day :" << day << endl;
    cout << "month :" << month << endl;
    cout << "year :" << year << endl;
    cout << "the date is :" << day << count << month << count << year;
}
int main()
{
     date::input(8, 4, 7);
    cout << "enter the date :" << endl;
    date d1;
    d1.print();

    return 0;
}