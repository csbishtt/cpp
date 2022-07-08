#include <iostream>
#include <math.h>
using namespace std;
class rno
{
public:
    int num, r, rno = 0;
    void getdata(class rno);
    void calc();
    void display();
};
void rno::getdata(class rno n)
{
    num = n.num;
    cout << "you have enetred the number is : " << num << endl;
}

void rno::calc()
{
    while (num != 0)
    {

        r = num % 10;
        rno = rno * 10 + r;
        num /= 10;
    }
}

void rno::display()
{
    cout << "the reversed number is  : " << rno << endl;
}
int main()
{
    class rno n;
    cout << "enter a number :";
    cin >> n.num;

    n.getdata(n);
    n.calc();
    n.display();
    return 0;
}