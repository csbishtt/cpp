#include <iostream>
#include <string>
using namespace std;
class calculation
{
    int num_1;
    int num_2;
    int sum_v, sub_v, mul_v, div_v;

public:
    calculation(int, int);

    void sum();
    void sub();
    void mul();
    void div();
    void show();
};

calculation::calculation(int a, int b)
{
    num_1 = a;
    num_2 = b;
}

void calculation::sum()
{
    sum_v = num_1 + num_2;
}

void calculation::sub()
{
    sub_v = num_1 - num_2;
}

void calculation::mul()
{
    mul_v = num_1 * num_2;
}

void calculation::div()
{
    div_v = num_1 / num_2;
}
void calculation::show()
{
    cout << "sum is :" << sum_v << endl;
    cout << "sub is :" << sub_v << endl;
    cout << "mul is :" << mul_v << endl;
    cout << "div is :" << div_v << endl;
}

int main()
{
    calculation c(3, 4);
    c.sum();
    c.sub();
    c.mul();
    c.div();
    c.show();

    return 0;
}