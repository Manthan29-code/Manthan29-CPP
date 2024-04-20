
//learn about hybrid inharitance
#include<iostream.h>
using namespace std;
class A{
      int a,b,c;
      public:
	 A(){
	   a=45;
	   b=76;
	 }
	void add(){
	  c=a+b;
	  cout<<"\nThis c is"<<c;
	}
};
class B:virtual public A{
      int d,e,f;
      public:
	 B(){
	   d=98;
	   e=46;
	 }
	void sub(){
	  f=d-e;
	  cout<<"\nThis f is"<<f;
	}
};
class C:virtual public A{
      int x,y,z;
      public:
	 C(){
	   x=46;
	   y=6;
	 }
	void mul(){
	    z=x*y;
	  cout<<"\nThis z is"<<z;
	}
};
class D:virtual public A{
      int p,q,r;
      public:
	 D(){
	   p=50;
	   q=5;
	 }
	void div(){
	  r=p/q;
	  cout<<"\nThis r is"<<r;
	}
};
class E:public B{
      int h;
      public:
	 E(){
	   h=45;

	 }
	void squar(){

	  cout<<"\nThis h is"<<h*h;
	}
};
class F:public D{
      int j;
      public:
	 F(){
	   j=6;

	 }
	 void cube(){

	  cout<<"\nThis j is"<<j*j*j;
	}
};
class G:public E,public F, public C{
      int i,f,fact;
      public:
	 G(){
	   f=5;
	   fact=1;
	 }
	void factorial();
};
void G::factorial(){
	  for(i=1;i<=f;i++){
	       fact*=i;
	   }
	  cout<<"\nThis factorial is"<<fact;
};
int main(){
    G obj;
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    obj.squar();
    obj.cube();
    obj.factorial();
    return 0;
}