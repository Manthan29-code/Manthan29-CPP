//How to use pure virtual function?

#include<iostream.h>
using namespace std;

class base
{
    public:
    int a;
    base()
    {
        a=19;
    }
    virtual void print()=0;  // as we assigned 0 functon became pure virtual function  so class base is now abstract class(we can,t make object of such class)
                            // if we eant to access other member function of this class them we must have to };                          //
                            //override this virtual function in it's derived class
    void get_value()
    {

       cout<<a<<endl;
    }                         
};

class Derived:public base
{
    public:
    int b;
    Derived()
    {
        b=73;        
    }
    void print()
    {
        cout<<"hello from Derived class"<<endl;
        base::get_value();
    }
    void get_value()
    {
       cout<<b;
    }

};
int main()
{
//     base a;
//     a.get_value();   
       Derived d;
       d.print();
       d.get_value();

};