#include <iostream>
using namespace std;
class b;
class a
{
    int num1;

public:
    a(int x) : num1(x) {}
    void print()
    {
        cout << "num1 is :" << num1 << endl;
    }
    friend void swap(a *a1, b *b1);
};

class b
{
    int num2;

public:
    b(int x) : num2(x) {}
    void print()
    {
        cout << "num2 is :" << num2 << endl;
    }
    friend void swap(a *a1, b *b1);
};

void swap(a *a1, b *b1)
{
    int temp;
    temp = a1->num1;
    a1->num1 = b1->num2;
    b1->num2 = temp;
}

int main()
{
    cout << "before swapping"<<endl;
    a a1(5);
    a1.print();

    b b1(7);
    b1.print();
    swap(&a1, &b1);
    cout << "after swapping"<<endl;
    a1.print();
    b1.print();

    return 0;
}