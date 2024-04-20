/*
		Name-->Movaliya Manthan J.
		Doc-->5/7
		Topic-->learn about overloding
*/
#include<iostream.h>
using namespace std;

class Shape{
      float l,b,h,r,ans;
      float pi;	  //instance variable
  public:   //so we can assece from outside class shape
      Shape(){
	  pi=3.14;
      }
      void area()
      {    //defoult constractur
	    cout<<"\nEnter the radius";
	    cin>>r;
	    ans=pi*r*r;
	    cout<<"\nthe ans is= "<<ans;
      }
      void area(float a,float c)
      {
	    l=a;
	    b=c;
	    ans=l*b;
	    cout<<"\nthe ans is= "<<ans;
      }
      void area(float a)
      {
	    l=a;
	    ans=l*l;
	    cout<<"\nthe ans is= "<<ans;
      }
};
// As you have seen in above code that, I define 3 add function but their parameter is differnt 
// this is nothing but an example of function overloding.
int main(){
   Shape obj;
   obj.area();
   obj.area(45.6,78.5);
   obj.area(98.6);
   return 0;
}