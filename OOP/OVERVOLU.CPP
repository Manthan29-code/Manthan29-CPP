/*
		Name-->Movaliya Manthan J.
		Doc-->5/7
		Topic-->learn about overloding by finding volume of different shape
*/
#include<iostream.h>
using namespace std;

class Shape{
      float l,b,h,r,ans;
      float pi;	  //instance variable
  public:   //so we can assece from outside class sample
      Shape(){
	  pi=3.14;
      }
      void volume(){    //defoult constractur it used to find volume of sphear
	 cout<<"\nEnter the radius";
	 cin>>r;
	 ans=pi*r*r*r*(4/3);
	 cout<<"\nthe ans is= "<<ans;
      }
      void volume(float a,float c,float d){      // volume of box
	 l=a;
	 b=c;
	 h=d;
	 ans=l*b*h;
	 cout<<"\nthe ans is= "<<ans;
      }
      void volume(float a){       //volume of cube
	 l=a;
	 ans=l*l*l;
	 cout<<"\nthe ans is= "<<ans;
      }
      void volume(float a, int b){       //volume of cylinder
	 r=a;
	 h=b;
	 ans=pi*r*r*h;
	 cout<<"\nthe ans is= "<<ans;
      }
};

int main(){
   Shape obj;
   obj.volume();
   obj.volume(45.6,78.5);
   obj.volume(98.6);
   obj.volume(67.9,60);
   return 0;
}