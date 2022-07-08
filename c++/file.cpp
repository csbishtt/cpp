// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     int y;
//     cout<<"enter some number"<<endl;
//     cin>>x>>y;
//     try
//     {

//         if (y == 0)
//         {
//             throw "error";

//         }
//         else
//         {
//             cout<<"div of x and y :";
//             cout<<x/y;
//         }
//     }

//     catch (...)
//     {
//      cout<<"error";
//     }
//     return 0;
// }

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    string ch;
    cout << "enter some char" << endl;
    getline(cin,ch);
    ofstream fst;
    fst.open("sample.txt", ios::app);
    fst << ch << "\n";
    fst.close();

    return 0;
}