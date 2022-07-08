#include<iostream>
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
    for(int i=1;i<=num;i++)
    {
        cout<<i*2-1<<endl;
    }
}
int main()
{
int n;
cout<<"enter the number of odd number to print :"<<endl;
cin>>n;
odd o;
o.getdata(n);
o.calc();
    return 0;

return 0;
}