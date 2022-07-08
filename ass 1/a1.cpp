#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}
int main()
{
    int a, b;
    cout << "Enter the two numnber :" << endl;
    cin >> a >> b;
    cout << "After swappping the number :" << endl;
    cout << a << endl
         << b << endl;
    swap(&a, &b);
    cout << "Before swappping the number :" << endl;
    cout << a << endl
         << b << endl;
    return 0;
}