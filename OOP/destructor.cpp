
#include<iostream.h>
using namespace std;
class Hello_world
{
    public:
	Hello_world()
	{
		cout<<"constructor is called"<<endl;
	}
	~Hello_world()
	{
		cout<<"deconstructor is called"<<endl;
	}
	// destructor will be called autometically (at end of the main function)when scope of object ends.
    void display()
	{
		cout<<"Hello world"<<endl;
	}

};

int main()
{ 
	int a=50;
	Hello_world obj;  
	obj.display();
    cout<<a;
	return 0;
};