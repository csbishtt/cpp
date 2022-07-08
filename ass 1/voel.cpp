#include <iostream>
#include <string.h>
using namespace std;
class emp
{
    char name[10];
    int id;

public:
    void get();
    void show();
};
void emp::get()
{
    cout << "enter a emp name :";
    cin >> name;

    cout << "enter a emp id :";
    cin >> id;
    cout << endl;
}
void emp::show()
{
    cout << "the emp name is :" << name<<endl;
    cout << "the emp id id :" << id;
}
int main()
{
    emp obj;
    obj.get();
    obj.show();

    return 0;
}