#include <iostream>
using namespace std;
template <typename t>
void minimum(t a[], t s, t *min)
{
    t i;
    for (i = 0; i < s; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}

int main()
{
    int a[] = {6, 3, 8, 3, 4};
    int min = a[0];
    minimum<int>(a, 6, &min);
    cout << "the min is :" << min << endl;

    return 0;
}