#include <iostream>
using namespace std;
class odd
{
    int num;

public:
    void getdata(int);
    void calc();
    
};
void odd::getdata(int a)
{
    num = a;
}

void odd::calc()
{
    int i;
    if (num % 2 == 0)
    {
     
        for (i = num; i<num+20; i+=2)
        {
            cout <<i<<endl;
        }
    }
    else
    {
        for (i = num; i<20; i+=2)
        {
            cout << i<<endl;
        }
    }
}

int main()
{
    int a;
     cout<< "Enter the numnber to display the first ten odd number:";
    cin >> a;
odd o;
o.getdata(a);
o.calc();
    return 0;
}