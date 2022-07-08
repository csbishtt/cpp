#include <iostream>
using namespace std;

class a
{

public:
    virtual void print()
    {
        cout << "base class " << endl;
    }
};

class b : public a
{
public:
    void print()
    {
        cout << "child class" << endl;
    }
};

int main()
{
    a *a1;
    a a2;
    a1 = &a2;
    a1->print();
    b b1;
    a1 = &b1;
    a1->print();

    return 0;
}