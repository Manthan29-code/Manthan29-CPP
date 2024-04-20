// generate subset
#include<iostream>
#include<string.h>
using namespace std;
/*
void subset(string &str,string str1="", int n=0)
{
    if(n==str.length())
    {
        cout<<"{"<<str1<<"},"<<" ";
        return;
    }
    subset(str,str1,n+1);
    subset(str, str1+str[n],n+1);
}
*/


void per(string &str,int i=0)
{

    if(i==str.length()-1)
    {
        cout<<"{"<<str<<"},"<<" ";
        return;
    }
    for (int j=i; j<str.length();j++)
    {
       swap(str[i],str[j]);
       per(str,i+1) ;
       swap(str[i],str[j]);
    }
} 
int main()
{
    string name="123";
    per(name);
    return 0;
}