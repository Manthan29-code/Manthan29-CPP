// constructor
#include<iostream.h>
#include<iomanip.h>
using namespace std;

class samay
{
    int hr,min, sec,day;
public:
    samay() 
    {
        hr=0;
        min=0;
        sec=0;
        day=0;
    }
    samay(int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void add(samay x,samay y)
    {
        hr=x.hr + y.hr;
        min=x.min + y.min;
        sec= x.sec +y.sec;
        if((sec/60)>=1)
        {
            sec%=60;            
            min+=1; 
        };
        if((min/60)>=1)
        {
            min%=60;            
            hr+=1;
        };if((hr/24)>=1)
        {
            hr%=24;            
            day+=1;
        };
    }
    void display()
    {
        cout<<std::setw(2)<<std::setfill('0')<<"day:hr:min:sec"<<endl<<day<<":"<<hr<<":"<<min<<":"<<sec;
    }
};
int main()
{
    samay obj3;
    int a,b,c;
    cout<<"Enter hour,min,& second";
    cin>>a>>b>>c;
    samay obj1(a,b,c);
    cout<<"Enter hour,min,& second";
    cin>>a>>b>>c;
    samay obj2(a,b,c);
    obj3.add(obj1,obj2);
    obj3.display();
    return 0;

}