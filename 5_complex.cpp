#include <iostream>
using namespace std;
class complex
{

    int a;
    int b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << a << " + " << b << "i" << endl;
    }
    complex operator+(complex c1)
    {
        complex c;
        c.a = a + c1.a;
        c.b = b + c1.b;
        return c;
    }
};

int main()
{
    complex c1;
    c1.getdata(3, 4);
    c1.print();

    complex c2;
    c2.getdata(4, 2);
    c2.print();

    complex c3;
    c3 = c1 + c2;
    c3.print();

    return 0;
}
