#include <iostream>
using namespace std;
float area(float a)
{
    float pi = 3.14;
    float ar = pi * a * a;
    return ar;
}

int area(int a)
{
    int ar = a * a;
    return ar;
}

int area(int a, int b)
{
    int ar = (a * b) / 2;
    return ar;
}

int main()
{
    float r;
    cout << "enter the radius : " << endl;
    cin >> r;
    cout << area(r)<<endl;
    int a;
    cout << "enter the side : " << endl;
    cin >> a;
    cout << area(a)<<endl;

    int l, b;
    cout << "enter the length and breadth :" << endl;
    cin >> l >> b;
    cout << area(l, b)<<endl;

    return 0;
}