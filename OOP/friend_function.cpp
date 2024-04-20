/*

//-------------------------------WAP to demonstrate friend function------------------------------------------------------------------------//

*/
#include<iostream.h>
using namespace std;
class ClassB; // forward diclaration is needed since it passed as argument in friend function
class ClassA
{
    int a;
    friend int add(ClassA,ClassB);
    public:
    ClassA()
    {
        a=18;
    }
};
class ClassB
{
    int b;
    friend int add(ClassA,ClassB);
    public:
    ClassB()
    {
        b=18;
    }
};

int add(ClassA obj1, ClassB obj2)
{
    return(obj1.a + obj2.b);
}

int main()
{
    ClassA objA;
    ClassB objb;
    cout<<"sum is"<<add(objA,objb);
    return 0;
}