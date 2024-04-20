// in this program we will learn about  multilevel inharitance
#include<iostream.h>
using namespace std;
#include<process.h> // it is included boz we want to use exit(0) in our programe
class Grandparent{
    int p,q,r;
    public:
	Grandparent(){
	   cout<<"\n This is Grandparent constructur";

	}
	void square(){
	   cout<<"Enter the value for p ";
	   cin>>p;
	   q=p*p;
	   cout<<"\n The square is ="<<q;
	}

};

class parent:public Grandparent{
   private:
       int x,y,z;
   public:
       parent(){
	   cout<<"\n This is parent constructur";

	}
       void add();//declaration incide , definition outside
       void sub(){     //declaration & definition inside
	   cout<<"Enter the value for x and y";
	   cin>>x>>y;
	   z=x-y;
	   cout<<"\n The sum is ="<<z;
       }
};
void parent::add(){
      cout<<"\n Enter the value for x and y";
      cin>>x>>y;
      z=x+y;
      cout<<"\n The answer is="<<z;
}
class Child:public parent{
      int a,b,c;
      public:
	   Child(){
	   cout<<"\n This is child constructur";

	}
	  void mul(){
	      cout<<"\n Enter the value for a and b";
	      cin>>a>>b;
	      c=a*b;
	      cout<<"\n The answer is="<<c;
	}
	  void div();
};
void Child::div(){
	      cout<<"\n Enter the value for a and b";
	      cin>>a>>b;
	      cout<<"\n The answer is="<<a/b;

}
void main()
{
    Child obj;
    int ch;
    start:
     cout<<"\n1---add";
     cout<<"\n2---sub";
     cout<<"\n3---mul";
     cout<<"\n4---div";
     cout<<"\n5---square";
     cout<<"\n6---exit";
     cout<<"\nEnter your choice";
     cin>>ch;
     switch(ch)
	 {
	    case 1:obj.add();
	          break;
	    case 2:obj.sub();
	          break;
	    case 3:obj.mul();
	          break;
	    case 4:obj.div();
	          break;
	    case 5:obj.square();
	          break;
	    case 6:exit(0);
     }//end of switch
     goto start;

}//end of main
