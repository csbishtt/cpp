#include <iostream>
using namespace std;
class a
{
public:
    int num1;
    int num2;

    virtual void show(int x, int y)
    {
        num1 = x;
        num2 = y;
        cout << num1 + num2;
    }
};
class b : public a
{
    public:
    void show(int x, int y)
    {
        cout << "child class";
        num1 = x;
        num2 = y;
        cout << num1 + num2;
    }
};

int main()
{
    a *a1;
    b b2;
    a1=&b2;

    a1->show(3, 4);

    return 0;
}
