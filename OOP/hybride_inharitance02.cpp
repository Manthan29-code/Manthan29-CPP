
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
class D:public C,public B{
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
int main(){
    D obj;
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}