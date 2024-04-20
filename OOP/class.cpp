//first and  basic programe with class

#include<iostream.h>
using namespace std;
#include<string.h>

class student{
public:
       int rno;
       char name[20];
       int std;
};
int main(){
   student s;
   s.rno=1;
   strcpy(s.name,"rahul");
   s.std=12;
   cout<<"\n"<<s.rno<<"\t"<<s.name<<"\t"<<s.std;
   return 0;
}