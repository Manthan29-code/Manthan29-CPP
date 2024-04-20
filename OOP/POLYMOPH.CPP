// learn about polymorphsm
#include<iostream.h>
using namespace std;
class parent{
     int a,b,c;
     public:
     parent(){
	a=34;
	b=56;
     }                         // virtual permits us to ovwrwrite add function
     virtual void add(){
	c=a+b;
	cout<<"\n The is super class function"<<c;
     }
};
class child: public parent{
     int x,y,z;
     public:
     child(){
	x=56;
	y=89;
     }
     void add(){
	z=x+y;
	cout<<"\n The is output of sub class function"<<z;
     }
};
class child2: public child{
     int p,q,r;
     public:
     child2(){
	p=36;
	q=89;
     }
     void add(){
	r=p+q;
	cout<<"\n The is output of child2 function"<<r;
     }
};
	       //if we create same function in super class and sub class
/*int main(){       // compiler will prefer sub class function over super class function
    child obj;      // becouse cild class functon overite parent class function
    obj.add();
    getch();
    return 0;

};  */


int main(){
    parent *prt;    // we use pointer to access add function from superclass
    parent obj1;
    child *prt2;
    child obj;
    child2 obj2;
 //   child2 *prt3=&obj2;
    prt=&obj1;
    cout<<"\n address of obj1 stored in prt  is="<<prt;
    prt->add();   // to call add function from superclass

    prt=&obj;
    cout<<"\n address of obj stored in prt is="<<prt;
    prt->add();   // to call add function from subclass

    prt=&obj2;
    cout<<"\n address of obj2 stored in prt is="<<prt;
    prt->add();   // to call add function from sub2 class

    // lets try to access perent class function by child class pointer
   /* prt2=&obj1;
    prt2->add(); */
    // N0.... we cannot access it
    // let's try to access child2 function thorugh child pointer prt2
    prt2=&obj2;
    cout<<"\n address of obj2 stored in prt2 is="<<prt2;
    prt2->add();
 //   prt3->add();
    return 0;

};