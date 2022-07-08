#include <iostream>
using namespace std;
template <typename t>
void bubblesort(t a[], t s)
{
    t i, j;
    for (i = 0; i < s; i++)
    {
        for (j = 0; j < s - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
template <typename t>
void display(t a[], t s)
{
    for (t i = 0; i < 6; i++)
        cout << a[i] << endl;
}

int main()
{
    char a[] = {'z','c','a','h','r'};
    cout << "before swapping "<<endl;
    display<char>(a, 5);
    bubblesort<char>(a, 5);
    cout << "after swapping "<<endl;
    display<char>(a, 6);

    return 0;
}