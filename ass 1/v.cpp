#include <iostream>
using namespace std;
int main()
{
    int n;
    int i;
    for(i=1;i<=100;i++)
    {
        int temp=0;
        for(int j=2;j<=i-1;j++)
        {
        if(i%j==0)
        {
            temp++;
        }
        }
        if(temp==0)
        {
            cout<<i<<endl;
        }
        
    }

    return 0;
}