#include <iostream>
using namespace std;
class dis
{
public:
    int inch, feet;
    void showdata(dis d);
    friend void showcalc(dis o1, dis o2);
};
void dis::showdata(class dis d)
{
    cout << "The distanace is : " << d.feet << " feet " << d.inch << " inch " << endl
         << endl;
}

void showcalc(dis o1, dis o2)
{
    dis o3, o4;
    if (o1.inch >=12)
    {
        o3.feet = (o1.inch / 12) + o1.feet;
        o3.inch = o1.inch % 12;
        cout << "The distanace 1 is : " << o3.feet << " feet " << o3.inch << " inch " << endl;
    }
    else
    {
        o3.feet=o1.feet;
        o3.inch=o1.inch;
         cout << "The distanace 1 is : " << o3.feet << " feet " << o3.inch << " inch " << endl;
    }
    if (o2.inch >=12)
    {
        o4.feet = (o2.inch / 12) + o2.feet;
        o4.inch = o2.inch %12;
         cout << "The distanace 2 is : " << o4.feet << " feet " << o4.inch << " inch " << endl;
    }
    else
    {
        o4.feet=o2.feet;
        o4.inch=o2.inch;
         cout << "The distanace 2 is " << o4.feet << " feet " << o4.inch << " inch " << endl;
    }
    cout << "The sum of distanace 1 and 2 is : " << o3.feet + o4.feet << " feet " << o3.inch + o4.inch << " inch " << endl
         << endl;
}

int main()
{
    class dis d1;
    cout << "enter a distance in feet : " << endl;
    cin >> d1.feet;
    cout << "enter a distance in inch : " << endl;
    cin >> d1.inch;
    d1.showdata(d1);

    class dis d2;
    cout << "enter a distance in feet : " << endl;
    cin >> d2.feet;
    cout << "enter a distance in inch : 13" << endl;
    cin >> d2.inch;
    d2.showdata(d2);

    showcalc(d1,d2);

    return 0;
}