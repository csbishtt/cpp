#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap(float *x, float *y)
{
    float temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    char a='b';
    char b='f';
    swap(&a, &b);
    cout<<a<<endl<<b;
    return 0;
}