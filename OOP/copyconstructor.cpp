//try  to understand.. 
#include<iostream.h>
using namespace std;
class A{
	mutable int a;
public:
	A(){
		cout<<"A's default constructor called\n";
	}
	A(const A& a){
		cout<<"A's copy Constructor called\n";
	}
};
class B{
	A obj;
public:
	B(){
		cout<<"B's Constructor called\n";
	}
};
int main()
{
	A a1;   
	A a2= a1;
	B b1;
	B b2;
	return 0;
}