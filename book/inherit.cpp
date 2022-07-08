#include <iostream>
using namespace std;
class a
{
public:
    int num1;
    int num2;

    a(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
};
class b : public a
{
    int num3;

public:
    b(int x, int y, int z) : a(x, y)
    {
        num3 = z;
    }

    void display()
    {
        cout << num1 + num2 + num3;
    }
};

int main()
{
    b b1(2,3,4);

    b1.display();


    return 0;
}