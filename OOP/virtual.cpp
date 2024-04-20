// in this program we will learn about concept of virtual keyward and try to understand why it is inmpotance
#include<iostream.h>
using namespace std;

class a
{
    public:
    int a=57;
    void get_a()
    {
        cout<<endl<<"This is a in class a"<<a;
    }

};
class b:virtual public a
{
    
    public:
    void get_a()
    {
        cout<<endl<<"This is a in class b"<<a;
    }

};
class c:virtual public a
{
    
    public:
    void get_a()
    {
        cout<<endl<<"This is a in class c"<<a;
    }

};
/*
note that we have use virtual keyword so only one copy of int a (attribut of class a)
will inherit in class d
*/
class d:public b,public c  
{
    
    public:
    void get_a()
    {
        cout<<"This is a in class d"<<a;
    }

};
int main()
{
    d obj;
    obj.get_a();
    obj.a::get_a(); // here we are accesing function of class a through object of d
    obj.b::get_a();// here we are accesing function of class b through object of d
    obj.c::get_a();// here we are accesing function of class c through object of d
    return 0;
}