#include <iostream>
using namespace std;
class matrix
{
    int a[3][3];
    int i, j;

public:
    void getdata()
    {
        cout << "enter matrix";
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        cout << "the matrix is" << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << a[i][j];
                cout << "\t";
            }
            cout << "\n";
        }
    }
    matrix operator+(matrix m)
    {
        matrix m1;

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                m1.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return m1;
    }
};

int main()
{
    matrix m1;
    m1.getdata();
    m1.display();

    matrix m2;
    m2.getdata();
    m2.display();
    matrix m3;
    m3 = m1 + m2;
    cout << "adition matrix ";
    m3.display();
}
// #include <iostream>
// using namespace std;
// class matrix
// {
//     int a[3][3];
//     int i, j;

// public:
//     void getdata()
//     {
//         cout << "enter matrix";
//         for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 cin >> a[i][j];
//             }
//         }
//     }
//     void display()
//     {
//         cout << "the matrix is" << endl;
//         for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 cout << a[i][j];
//                 cout << "\t";
//             }
//             cout << "\n";
//         }
//     }
//     matrix operator+(matrix m)
//     {
//         int mx[3][3];

//         for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 mx[i][j] = a[i][j] + m.a[i][j];
//             }
//         }
//         cout << "the addition matrix is" << endl;
//         for (i = 0; i < 3; i++)
//         {
//             for (j = 0; j < 3; j++)
//             {
//                 cout << mx[i][j];
//                 cout << "\t";
//             }
//             cout << "\n";
//         }
//     }
// };

// int main()
// {
//     matrix m1;
//     m1.getdata();
//     m1.display();

//     matrix m2;
//     m2.getdata();
//     m2.display();
//     matrix m3;
//     m1 + m2;
    
// }