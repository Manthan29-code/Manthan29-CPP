#include<iostream.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream fcout;
    fcout.open("basic.txt"); // to open a file
    fcout<<"hello warld";
    fcout.close();

    ifstream fcin;
    fcin.open("basic.txt"); // to open a file
    char c;
    fcin.get(c);
    while(!fcin.eof())
    {
        cout<<c;
        fcin.get(c);
    };
    fcin.close();
    return 0;
}