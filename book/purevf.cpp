#include <iostream>
using namespace std;
class a
{
public:
    int num1;
    int num2;

    virtual void sh(int x, int y) =0;
    void ch()
    {
        cout << "Num 1 is : "<<num1 << endl;
        cout << "Num 2 is : "<<num2 << endl;
        cout << "the sum is : "  ;
    }
};
class b : public a
{

public:
    void sh(int x, int y)
    {
        num1 = x;
        num2 = y;
        ch();
        cout << num1 + num2 << endl;
    }
};

int main()
{
    b b1;
    b1.sh(3, 4);

    return 0;
}
