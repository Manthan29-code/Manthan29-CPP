// learn about inharitance
#include<iostream.h>
#include<conio.h>
#include<process.h>
class parent{
   private:
       int x,y,z;
   public:
       void add();//declaration incide
       void sub(){     //definition inside
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
void main(){
    Child obj;
    int ch;
    start:
     clrscr();
     cout<<"\n1---add";
     cout<<"\n2---sub";
     cout<<"\n3---mul";
     cout<<"\n4---div";
     cout<<"\n5---exit";
     cout<<"\nEnter your choice";
     cin>>ch;
     switch(ch){
	case 1:obj.add();
	      break;
	case 2:obj.sub();
	      break;
	case 3:obj.mul();
	      break;
	case 4:obj.div();
	      break;
	case 5:exit(0);
     }//end of switch
   getch();

   goto start;

}//end of main
