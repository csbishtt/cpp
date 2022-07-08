#include <iostream>
#include<string.h>
using namespace std;
class letter
{
    char n[20];
    static int count;

public:
    void getdata(char name[])
    {
        strcpy(n, name);
        ++count;
    }
    static void display()
    {
        cout << "count :" << count<<endl;
    }
};
int letter::count = 1;
int main()
{
    letter l;
    char name[10];
    char more = 'y';
    while (more != 'n')
    {
        cout << "enter name :";
        cin >> name;
        letter::display();
        l.getdata(name);
        cout << "enter y for coninue \nenter n for exit :";
        cin >> more;
    }

    return 0;
}