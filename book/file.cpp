#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream f;
f.open("x.txt",ios::out);
f<<"hello wrld succsee \n";
f<<"hello wrld succsesssss";

return 0;
}