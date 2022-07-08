// function template without class function:

// #include <iostream>
// using namespace std;
// class a
// {
// public:
//     template <typename t = int>
//     t add(t x, t y);
// };
// template <typename t>
// t a::add(t x, t y)
// {
//     t a;
//     a = x > y ? x : y;
//     return a;
// }
// int main()
// {
//     int x;
//     a a1;
//     x = a1.add(4.5, 5.7);
//     cout << x;
//     return 0;
// }

// function template without class function with default argument:

// #include <iostream>
// using namespace std;

// template <typename t=int>
// void add(t x, t y)
// {
//     t a;
//     a = x > y ? x : y;
//     cout<<a;
// }
// int main()
// {
//     add(4.5, 5.5);

//     return 0;
// }

// overload function template
// #include <iostream>
// using namespace std;

// template <typename t>
// void add(t x, t y)
// {
//     t a;
//     a = x > y ? x : y;
//     cout<<"template";
//     cout<<a;
// }

// void add(int  x, int y)
// {
//     int a;
//     cout<<"simple";
//     a = x > y ? x : y;
//     cout<<a;
// }
// int main()
// {
//     add(4, 5);

//     return 0;
// }

// 5:
// #include <iostream>
// using namespace std;
// class a
// {
// public:
//     template <typename t = int>
//     void add(t x, t y);
// };
// template <typename t>
// void a::add(t x, t y)
// {
//     t a;
//     a = x > y ? x : y;
//     cout << a;
// }
// int main()
// {

//     a a1;
//     a1.add(4.5, 5.7);

//     return 0;
// }

#include <iostream>
using namespace std;
template <class t = int>
class ab
{
public:
    t add(t x, t y);
};
template <class t>
t ab<t> ::add(t x, t y)
{
    t a;
    a = x > y ? x : y;
    return a;
}
int main()
{
    float x;
    ab<> a1;
    x = a1.add(4.5, 5.7);
    cout << x;
    return 0;
}
