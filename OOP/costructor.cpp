/*
		Name-->Movaliya Manthan J.
		Topic-->  constractor
*/
#include<iostream.h>
using namespace std;

class Sample{
      int a,b,sum;    //instance variable
  public:          //so we can assece from outside class sample
      Sample()
      {         //defoult constractur
         a=34;
         b=55;
      }
      Sample(int x, int y)
      {         //peremeterised constracture
         a=x;
         b=y;
      }
      void display()
      {
	   sum=a+b;
	   cout<<endl<<sum;
      }
   /*    void display1(){
	   cout<<endl<<c<<"\n"<<d;
      } */


};

int main(){
   int a,b;
   cout<<"enter two value for perameterised constractur\n";
   cin>>a>>b;
   Sample obj;   //creat variable obj which data type is class sample
   Sample obj1(a,b);
   cout<<"\nthis is output of defoult constractur";
   obj.display();
   cout<<"\nthis is output of perameterased constractur";
   obj1.display();
   return 0;

}