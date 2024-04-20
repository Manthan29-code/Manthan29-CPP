#include<iostream.h>
using namespace std;
class a
{
    public:
          int a1;
};
class b: public a
{
    public:
          int b1;
};
class c: public a
{
    public:
          int c1;
};
class d: public b,public c
{
    public:
          int d1;
};
int main()
{
    d obj;
    obj.b::a1=10; //it will assign value of a1 to b1
    obj.c::a1=100;
    obj.b1=63;
    obj.d1=87;
    obj.c1=53;
    cout<<endl<<"value of b1 from a1"<<obj.b::a1;
    cout<<endl<<"value of bc from a1"<<obj.c::a1;
    cout<<endl<<"value of b1"<<obj.b1;
    cout<<endl<<"value of b1"<<obj.d1;
    cout<<endl<<"value of b1"<<obj.c1;
}
