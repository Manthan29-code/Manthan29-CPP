#include<iostream.h>
using namespace std;
class box
{
    private:
    double l,b,h;
    public:
    box(){} // defoult constracutor
    box(double x, double y, double z) //parameterize constracutor
    {
        b=  y;
        h=  z;
        l=  x;
    }
    double getvolume()
    {
        return l*b*h;
    }
    void setlength(double L)
    {
        l=L;
    }
    void setbredth(double B)
    {
        b=B;
    }
    void setheigth(double H)
    {
        h=H;
    }
    box operator +(box BOX);    
    // {
    //     box obj;
    //     obj.l = l + BOX.l;
    //     obj.b=  b + BOX.b;
    //     obj.h=  h + BOX.h;
    //     return obj;
    // }
};
// see how we can define operator overloding outside class

box box :: operator+(box BOX)
{
    return box((l + BOX.l),(b + BOX.b),(h + BOX.h));
};
int main()
{
    box b1,b2,b3;
    double volume;
    b1.setlength(5.6);
    b1.setbredth(7.8);
    b1.setheigth(3.5);

    b2.setlength(5.6);
    b2.setbredth(7.8);
    b2.setheigth(3.5);

    volume=b1.getvolume();
    cout<<"VOLUME OF BOX1 = "<<volume<<endl;
    volume=b2.getvolume();
    cout<<"VOLUME OF BOX2 = "<<volume<<endl;
    //b3=b1+b2;
    //above statment can be written as
    b3=b1.operator +(b2);
    // here b1 is used to invoke operater function which is member function of class box so we don't need to pass b1 as argument
    // if we have defined this operator as friend function, 
    //      in this case our statement should be like this-->  b3= operator(b1.,b2);
    volume=b3.getvolume();
    cout<<"VOLUME OF BOX3 = "<<volume<<endl;
    

};