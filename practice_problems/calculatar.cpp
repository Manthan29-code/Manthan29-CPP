/*

		  First c++ program

*/
#include<iostream.h>
using namespace std;
#include<process.h> // to use exit(0);
int main(){
    int a,b,c;
    int choice;
    cout<<"Enter the value for a and b"<<" also enter in integer";
    cin>>a>>b;
    cout<<endl<<"1-----add";
    cout<<endl<<"2-----sub";
    cout<<endl<<"3-----mul";
    cout<<"\n"<<"4-----div";
    cout<<endl<<"5-----exit";
    cout<<"\n Enter the choice";
    cin>>choice;
    switch(choice){
	 case 1:c=a+b;
		 cout<<"\nThe answer is"<<c;
		 break;
	 case 2:c=a-b;
		 cout<<"\nThe answer is"<<c;
		 break;
	 case 3:c=a*b;
		 cout<<"\nThe answer is"<<c;
		 break;
	 case 4:c=a/b;
		 cout<<"\nThe answer is"<<c;
		 break;
	 case 5:exit(0);
    }
    return 0;
}