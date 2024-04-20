/*
string can be define as class object which can be then manuplate like the built in class.
Since the strings very greatly in size we use new to allocatememory for each string and pointer variablr to point the string arrey.
thus we must creat string object that can hold two pice of information, namely leangth and location which are 
necessary for string manipulation
*/

#include<iostream.h>
#include<string.h>
using namespace std;

class str
{
      char *p;
      int len;
    public:
      str()
      {
        len=0;
        p=0;        
      }// create null string
      str(const char *s)// creat string from arreys
      {
          len = strlen(s);
          p=new char[len +1];
          strcpy(p,s);
          cout<<"str(const char *)\n";
      }
      str(const str &s) // copy constructor
      {
          len = s.len;
          p=new char[len +1];
          strcpy(p,s.p);
      }
      ~str()
      {
         delete p;
      } // destructor
      
      // + operator
      friend str operator +(const str  &s,const str  &t);
      // <= operator
      friend int operator<=(const str  &s,const str  &t);
      int show()
      {
           cout<<p<<endl;
           return 0;
      } 
};

str operator+(const str &s,const str &t)
{
    str temp;
    temp.len=s.len + t.len;
    temp.p=new char[temp.len +2];
    strcpy(temp.p,s.p);
    strcat(temp.p," ");
    strcat(temp.p,t.p);
    return (temp);
}
int operator<=(const str  &s,const str  &t)
{
    int m=strlen(s.p);
    int n=strlen(t.p);

    if(m<=n)
    {
        return (1);
    }else
    {
        return (0);
    };
}


int main()
{
    str s1("New");
    str s2("York");
    str s3("Delhi");
    //str s4;
    str s4 = s1 + s3;
    s1.show();
    s2.show();
    s3.show();
    s4.show();
    if (s4 <= s3)
    {
        cout<<"s3 is greater then s4";
    }
    else
    {
        cout<<"s4 is greater then s3";
    };
    return 0;
};
